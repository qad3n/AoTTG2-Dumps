// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SavedVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CF")]
public static class SavedVariables
{
	[Token(Token = "0x400093B")]
	public const string assetPath = "SavedVariables";

	[Token(Token = "0x400093C")]
	public const string playerPrefsKey = "LudiqSavedVariables";

	[Token(Token = "0x400093D")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001E5")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x600110A")]
		[Address(RVA = "0x684E930", Offset = "0x684D930", VA = "0x684E930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E6")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x684FA30", Offset = "0x684EA30", VA = "0x684FA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public static VariableDeclarations saved
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x684FAC0", Offset = "0x684EAC0", VA = "0x684FAC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x684FB00", Offset = "0x684EB00", VA = "0x684FB00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E8")]
	public static VariableDeclarations merged
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x684FB50", Offset = "0x684EB50", VA = "0x684FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x684FB90", Offset = "0x684EB90", VA = "0x684FB90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x684FBE0", Offset = "0x684EBE0", VA = "0x684FBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x684E9C0", Offset = "0x684D9C0", VA = "0x684E9C0")]
	public static void Load()
	{
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x684EA60", Offset = "0x684DA60", VA = "0x684EA60")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x684EE60", Offset = "0x684DE60", VA = "0x684EE60")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x684B9B0", Offset = "0x684A9B0", VA = "0x684B9B0")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x684F9F0", Offset = "0x684E9F0", VA = "0x684F9F0")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x684EEA0", Offset = "0x684DEA0", VA = "0x684EEA0")]
	public static void SaveDeclarations(VariableDeclarations declarations)
	{
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x684EAB0", Offset = "0x684DAB0", VA = "0x684EAB0")]
	public static void FetchSavedDeclarations()
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x684F030", Offset = "0x684E030", VA = "0x684F030")]
	private static void MergeInitialAndSavedDeclarations()
	{
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x684EE10", Offset = "0x684DE10", VA = "0x684EE10")]
	private static void DestroyMergedDeclarations()
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x684FC80", Offset = "0x684EC80", VA = "0x684FC80")]
	private static void WarnAndNullifyUnityObjectReferences(VariableDeclarations declarations)
	{
	}
}
