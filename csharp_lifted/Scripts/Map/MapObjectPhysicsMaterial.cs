// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectPhysicsMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectPhysicsMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200040F")]
public static class MapObjectPhysicsMaterial
{
	[Token(Token = "0x40014ED")]
	[FieldOffset(Offset = "0x0")]
	public static string Default;

	[Token(Token = "0x40014EE")]
	[FieldOffset(Offset = "0x8")]
	public static string Ice;

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapObjectPhysicsMaterial.c.

	// Map.MapObjectPhysicsMaterial$$.cctor: clean
	static MapObjectPhysicsMaterial()
	{

		MapObjectPhysicsMaterial.Default = "Default";
		MapObjectPhysicsMaterial.Ice = "IceMaterial";
		return;
	}
}
