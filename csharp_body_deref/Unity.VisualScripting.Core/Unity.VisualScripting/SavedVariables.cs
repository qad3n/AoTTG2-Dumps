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
		[Address(RVA = "0x2E56B90", Offset = "0x2E55190", VA = "0x182E56B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E6")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x2E56D20", Offset = "0x2E55320", VA = "0x182E56D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public static VariableDeclarations saved
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x2E56E80", Offset = "0x2E55480", VA = "0x182E56E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x2E56F20", Offset = "0x2E55520", VA = "0x182E56F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E8")]
	public static VariableDeclarations merged
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x2E56E40", Offset = "0x2E55440", VA = "0x182E56E40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x2E56EC0", Offset = "0x2E554C0", VA = "0x182E56EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x2E56CA0", Offset = "0x2E552A0", VA = "0x182E56CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x2E55CE0", Offset = "0x2E542E0", VA = "0x182E55CE0")]
	public static void Load()
	{
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x2E564D0", Offset = "0x2E54AD0", VA = "0x182E564D0")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x2E566F0", Offset = "0x2E54CF0", VA = "0x182E566F0")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x2E56530", Offset = "0x2E54B30", VA = "0x182E56530")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x2E56730", Offset = "0x2E54D30", VA = "0x182E56730")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x2E56770", Offset = "0x2E54D70", VA = "0x182E56770")]
	public static void SaveDeclarations(VariableDeclarations declarations)
	{
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x2E55A60", Offset = "0x2E54060", VA = "0x182E55A60")]
	public static void FetchSavedDeclarations()
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x2E55D80", Offset = "0x2E54380", VA = "0x182E55D80")]
	private static void MergeInitialAndSavedDeclarations()
	{
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x2E55A00", Offset = "0x2E54000", VA = "0x182E55A00")]
	private static void DestroyMergedDeclarations()
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x2E568B0", Offset = "0x2E54EB0", VA = "0x182E568B0")]
	private static void WarnAndNullifyUnityObjectReferences(VariableDeclarations declarations)
	{
	}
}
