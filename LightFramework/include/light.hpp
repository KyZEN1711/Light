#include "core/application.hpp"
#include "core/layer.hpp"
#include "light/rendering/shader.hpp"
#include "light/rendering/buffer.hpp"
#include "light/rendering/vertexarray.hpp"
#include "light/rendering/rendercommand.hpp"
#include "light/rendering/renderer.hpp"
#include "light/rendering/camera.hpp"
#include "rendering/editorcamera.hpp"
#include "light/rendering/texture.hpp"
#include "light/rendering/framebuffer.hpp"
#include "core/input.hpp"
#include "input/keycodes.hpp"
#include "input/mousecodes.hpp"
#include "core/timestep.hpp"
#include "core/logging.hpp"

#include "glm/gtc/type_ptr.hpp"

//--------ENTRY POINT-----------------
//#include "core/entrypoint.hpp"
//------------------------------------