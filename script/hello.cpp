#include <gazebo/gazebo.hh>

//using namespace gazebo;

namespace gazebo {
    class WorldPluginMyMaze : public WorldPlugin {
    public:
      	WorldPluginMyMaze() : WorldPlugin() {
        	printf("Welcome to Ruxiao's Maze!\n");
        }
    	void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyMaze)
}
