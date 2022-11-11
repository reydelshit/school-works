import 'package:flutter/material.dart';

void main() {
  runApp(Login());
}

class Login extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(home: LoginHome());
  }
}

class LoginHome extends StatelessWidget {
  var usernameController = new TextEditingController();
  var passwordController = new TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Text(''),
        ),
        body: Padding(
            padding: const EdgeInsets.all(120),
            child:
                Column(mainAxisAlignment: MainAxisAlignment.center, children: [
              const CircleAvatar(
                  backgroundImage: NetworkImage(
                      "https://media-exp1.licdn.com/dms/image/C5603AQFfPjVO7Bulow/profile-displayphoto-shrink_800_800/0/1652540197138?e=2147483647&v=beta&t=qxYfICadGRXZVbBN_Zm-nJIWcwHzJMqS8LyrPr_6uQA"),
                  radius: 50.0),
              TextField(
                controller: usernameController,
              ),
              TextField(
                controller: passwordController,
              ),
              SizedBox(
                  width: 120,
                  height: 70,
                  child: Padding(
                      padding: const EdgeInsets.all(10),
                      child: ElevatedButton(
                          child: const Text('Login'),
                          onPressed: () {
                            if (usernameController.text == '') {
                              ScaffoldMessenger.of(context).showSnackBar(
                                  SnackBar(
                                      content: const Text('Username is empty!'),
                                      backgroundColor: Colors.red,
                                      duration: const Duration(seconds: 2),
                                      action: SnackBarAction(
                                          label: 'OK', onPressed: () {})));
                            } else if (passwordController.text == '') {
                              ScaffoldMessenger.of(context).showSnackBar(
                                  SnackBar(
                                      content: const Text('Password is empty!'),
                                      backgroundColor: Colors.red,
                                      duration: const Duration(seconds: 2),
                                      action: SnackBarAction(
                                          label: 'OK', onPressed: () {})));
                            } else {
                              ScaffoldMessenger.of(context).showSnackBar(
                                  SnackBar(
                                      content: const Text('Loggin Succesfully'),
                                      backgroundColor: Colors.green,
                                      duration: const Duration(seconds: 2),
                                      action: SnackBarAction(
                                          label: 'OK', onPressed: () {})));
                              Navigator.of(context).push(MaterialPageRoute(
                                  builder: (BuildContext context) =>
                                      Dashboard()));
                            }
                          })))
            ])));
  }
}

class Dashboard extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(home: DashboardHome());
  }
}

class DashboardHome extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Dashboard'),
      ),
      body: Padding(
        padding: const EdgeInsets.all(120),
        child: Center(
          child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                const CircleAvatar(
                  backgroundImage: NetworkImage(
                      "https://media-exp1.licdn.com/dms/image/C5603AQFfPjVO7Bulow/profile-displayphoto-shrink_800_800/0/1652540197138?e=2147483647&v=beta&t=qxYfICadGRXZVbBN_Zm-nJIWcwHzJMqS8LyrPr_6uQA"),
                  radius: 50.0,
                ),
                const Text('Reydel A. Ocon'),
//             TextButton(
//               onPressed: () => showDialog<String>(
//                 context: context,
//                 builder: (BuildContext context) => const AlertDialog(
//                   title: Text('Alert'),
//                   content: Text('Alert Description'),
//                 ),
//               ),
//               child: const Text('Show Alert Dialog'),
//             ),

//             TextButton(
//               onPressed: () {
//                 Navigator.pop(context);
//                  Navigator.of(context).push(
//                        MaterialPageRoute(
//                        builder: (BuildContext context)=> LoginHome()
//                       )
//                     );
//               },
//               child: const Text('To Login Screen'),
//             ),

                SizedBox(
                    width: 170,
                    height: 70,
                    child: Padding(
                        padding: const EdgeInsets.all(10),
                        child: ElevatedButton(
                            child: const Text('Logout'),
                            onPressed: () {
                              Navigator.of(context).push(MaterialPageRoute(
                                  builder: (BuildContext context) =>
                                      Login()));
                            })))
              ]),
        ),
      ),
      drawer: Drawer(
        child: ListView(
          padding: EdgeInsets.zero,
          children: const <Widget>[
            DrawerHeader(
                decoration: BoxDecoration(
                  color: Colors.blue,
                ),
                child: Text('Drawer')),
          ],
        ),
      ),
    );
  }
}