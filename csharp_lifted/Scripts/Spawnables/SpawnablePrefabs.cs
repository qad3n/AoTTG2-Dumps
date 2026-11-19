// ==================== AoTTG2 cross-reference ====================
// Type: Spawnables.SpawnablePrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Spawnables/SpawnablePrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Spawnables/SpawnablePrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Spawnables;

[Token(Token = "0x2000060")]
internal class SpawnablePrefabs
{
	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	public static string Supply;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x8")]
	public static string Rock1;

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x576DD90", Offset = "0x576CD90", VA = "0x576DD90")]
	public SpawnablePrefabs()
	{
		// Lifted from source/cpp/Spawnables/SpawnablePrefabs.c (Spawnables.SpawnablePrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Spawnables/SpawnablePrefabs.c.

	// Spawnables.SpawnablePrefabs$$.cctor: clean
	static SpawnablePrefabs()
	{

		SpawnablePrefabs.Supply = "SupplySpawnable";
		SpawnablePrefabs.Rock1 = "Rock1Spawnable";
		return;
	}
}
