// ==================== AoTTG2 cross-reference ====================
// Type: Utility.ResourcePaths
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Utility/ResourcePaths.c
// Prior real C# source (older reference): Assets/Scripts/Utility/ResourcePaths.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000936")]
internal class ResourcePaths
{
	[Token(Token = "0x4002E59")]
	[FieldOffset(Offset = "0x0")]
	public static string UI;

	[Token(Token = "0x4002E5A")]
	[FieldOffset(Offset = "0x8")]
	public static string Characters;

	[Token(Token = "0x4002E5B")]
	[FieldOffset(Offset = "0x10")]
	public static string TitanParticles;

	[Token(Token = "0x4002E5C")]
	[FieldOffset(Offset = "0x18")]
	public static string CharacterData;

	[Token(Token = "0x4002E5D")]
	[FieldOffset(Offset = "0x20")]
	public static string Info;

	[Token(Token = "0x4002E5E")]
	[FieldOffset(Offset = "0x28")]
	public static string BuiltinMaps;

	[Token(Token = "0x4002E5F")]
	[FieldOffset(Offset = "0x30")]
	public static string Modes;

	[Token(Token = "0x4002E60")]
	[FieldOffset(Offset = "0x38")]
	public static string Addons;

	[Token(Token = "0x4002E61")]
	[FieldOffset(Offset = "0x40")]
	public static string Map;

	[Token(Token = "0x4002E62")]
	[FieldOffset(Offset = "0x48")]
	public static string Effects;

	[Token(Token = "0x4002E63")]
	[FieldOffset(Offset = "0x50")]
	public static string Spawnables;

	[Token(Token = "0x4002E64")]
	[FieldOffset(Offset = "0x58")]
	public static string Projectiles;

	[Token(Token = "0x4002E65")]
	[FieldOffset(Offset = "0x60")]
	public static string Weather;

	[Token(Token = "0x4002E66")]
	[FieldOffset(Offset = "0x68")]
	public static string Shaders;

	[Token(Token = "0x60056BF")]
	[Address(RVA = "0x5CF0DE0", Offset = "0x5CEFDE0", VA = "0x5CF0DE0")]
	public ResourcePaths()
	{
		// Lifted from source/cpp/Utility/ResourcePaths.c (Utility.ResourcePaths$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/ResourcePaths.c.

	// Utility.ResourcePaths$$.cctor: clean
	static ResourcePaths()
	{
		Utility_ResourcePaths_StaticFields pUVar1;

		ResourcePaths.UI = "UI";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Characters = "Characters";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.TitanParticles = "Characters/Titans/Particles/Prefabs";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.CharacterData = "Data/CharacterData";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Info = "Data/Info";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.BuiltinMaps = "Data/Maps";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Modes = "Data/Modes";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Addons = "Data/Addons";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Map = "Map";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Effects = "Effects/Prefabs";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Spawnables = "Spawnables/Prefabs";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Projectiles = "Projectiles/Prefabs";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Weather = "Weather";
		pUVar1 = typeof(ResourcePaths).static_fields;
		pUVar1.Shaders = "Shaders";
		return;
	}
}
