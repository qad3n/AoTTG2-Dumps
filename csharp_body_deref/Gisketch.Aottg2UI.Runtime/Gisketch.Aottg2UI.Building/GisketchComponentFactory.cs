using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000087")]
public delegate bool GisketchComponentFactory(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view);
