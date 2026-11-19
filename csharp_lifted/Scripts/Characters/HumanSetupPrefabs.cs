// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetupPrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetupPrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupPrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D0")]
internal class HumanSetupPrefabs
{
	[Token(Token = "0x4002052")]
	[FieldOffset(Offset = "0x0")]
	private static string AccessoriesPath;

	[Token(Token = "0x6004274")]
	[Address(RVA = "0x5B074E0", Offset = "0x5B064E0", VA = "0x5B074E0")]
	public static string GetBackPrefab(string back)
	{
		// Lifted from source/cpp/Characters/HumanSetupPrefabs.c (Characters.HumanSetupPrefabs$$GetBackPrefab): clean
		String pSVar1;

		pSVar1 = String.Concat(HumanSetupPrefabs.AccessoriesPath, "Back/Back", back);
		return pSVar1;
	}

	[Token(Token = "0x6004275")]
	[Address(RVA = "0x5B07550", Offset = "0x5B06550", VA = "0x5B07550")]
	public static string GetHatPrefab(string hat)
	{
		// Lifted from source/cpp/Characters/HumanSetupPrefabs.c (Characters.HumanSetupPrefabs$$GetHatPrefab): clean
		String pSVar1;

		pSVar1 = String.Concat(HumanSetupPrefabs.AccessoriesPath, "Hat/Hat", hat);
		return pSVar1;
	}

	[Token(Token = "0x6004276")]
	[Address(RVA = "0x5B075C0", Offset = "0x5B065C0", VA = "0x5B075C0")]
	public static string GetHeadPrefab(string head)
	{
		// Lifted from source/cpp/Characters/HumanSetupPrefabs.c (Characters.HumanSetupPrefabs$$GetHeadPrefab): clean
		String pSVar1;

		pSVar1 = String.Concat(HumanSetupPrefabs.AccessoriesPath, "Head/Head", head);
		return pSVar1;
	}

	[Token(Token = "0x6004277")]
	[Address(RVA = "0x5B07630", Offset = "0x5B06630", VA = "0x5B07630")]
	public HumanSetupPrefabs()
	{
		// Lifted from source/cpp/Characters/HumanSetupPrefabs.c (Characters.HumanSetupPrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HumanSetupPrefabs.c.

	// Characters.HumanSetupPrefabs$$.cctor: clean
	static HumanSetupPrefabs()
	{
		HumanSetupPrefabs.AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
		return;
	}
}
