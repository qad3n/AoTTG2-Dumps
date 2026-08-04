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
	[Token(Token = "0x400093D")]
	public const string assetPath = "SavedVariables";

	[Token(Token = "0x400093E")]
	public const string playerPrefsKey = "LudiqSavedVariables";

	[Token(Token = "0x400093F")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001E2")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x4D645A0", Offset = "0x4D645A0", VA = "0x4D645A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x6001103")]
		[Address(RVA = "0x4D65A50", Offset = "0x4D65A50", VA = "0x4D65A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	public static VariableDeclarations saved
	{
		[Token(Token = "0x6001104")]
		[Address(RVA = "0x4D65AE0", Offset = "0x4D65AE0", VA = "0x4D65AE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001105")]
		[Address(RVA = "0x4D65B20", Offset = "0x4D65B20", VA = "0x4D65B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	public static VariableDeclarations merged
	{
		[Token(Token = "0x6001106")]
		[Address(RVA = "0x4D65B70", Offset = "0x4D65B70", VA = "0x4D65B70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x4D65BB0", Offset = "0x4D65BB0", VA = "0x4D65BB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x4D65C00", Offset = "0x4D65C00", VA = "0x4D65C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4D64630", Offset = "0x4D64630", VA = "0x4D64630")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x4D646D0", Offset = "0x4D646D0", VA = "0x4D646D0")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4D64BA0", Offset = "0x4D64BA0", VA = "0x4D64BA0")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x4D615F0", Offset = "0x4D615F0", VA = "0x4D615F0")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4D65A10", Offset = "0x4D65A10", VA = "0x4D65A10")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x4D64BE0", Offset = "0x4D64BE0", VA = "0x4D64BE0")]
	public static void SaveDeclarations(VariableDeclarations declarations)
	{
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x4D64720", Offset = "0x4D64720", VA = "0x4D64720")]
	public static void FetchSavedDeclarations()
	{
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x4D64DA0", Offset = "0x4D64DA0", VA = "0x4D64DA0")]
	private static void MergeInitialAndSavedDeclarations()
	{
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x4D64B50", Offset = "0x4D64B50", VA = "0x4D64B50")]
	private static void DestroyMergedDeclarations()
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x4D65CA0", Offset = "0x4D65CA0", VA = "0x4D65CA0")]
	private static void WarnAndNullifyUnityObjectReferences(VariableDeclarations declarations)
	{
	}
}
