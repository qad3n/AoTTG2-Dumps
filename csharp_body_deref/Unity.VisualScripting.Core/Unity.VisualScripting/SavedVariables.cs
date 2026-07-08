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
		[Address(RVA = "0x4A3F9E0", Offset = "0x4A3F9E0", VA = "0x4A3F9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x6001103")]
		[Address(RVA = "0x4A40E90", Offset = "0x4A40E90", VA = "0x4A40E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	public static VariableDeclarations saved
	{
		[Token(Token = "0x6001104")]
		[Address(RVA = "0x4A40F20", Offset = "0x4A40F20", VA = "0x4A40F20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001105")]
		[Address(RVA = "0x4A40F60", Offset = "0x4A40F60", VA = "0x4A40F60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	public static VariableDeclarations merged
	{
		[Token(Token = "0x6001106")]
		[Address(RVA = "0x4A40FB0", Offset = "0x4A40FB0", VA = "0x4A40FB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x4A40FF0", Offset = "0x4A40FF0", VA = "0x4A40FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E6")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x4A41040", Offset = "0x4A41040", VA = "0x4A41040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4A3FA70", Offset = "0x4A3FA70", VA = "0x4A3FA70")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x4A3FB10", Offset = "0x4A3FB10", VA = "0x4A3FB10")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4A3FFE0", Offset = "0x4A3FFE0", VA = "0x4A3FFE0")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x4A3C790", Offset = "0x4A3C790", VA = "0x4A3C790")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4A40E50", Offset = "0x4A40E50", VA = "0x4A40E50")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x4A40020", Offset = "0x4A40020", VA = "0x4A40020")]
	public static void SaveDeclarations(VariableDeclarations declarations)
	{
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x4A3FB60", Offset = "0x4A3FB60", VA = "0x4A3FB60")]
	public static void FetchSavedDeclarations()
	{
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x4A401E0", Offset = "0x4A401E0", VA = "0x4A401E0")]
	private static void MergeInitialAndSavedDeclarations()
	{
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x4A3FF90", Offset = "0x4A3FF90", VA = "0x4A3FF90")]
	private static void DestroyMergedDeclarations()
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x4A410E0", Offset = "0x4A410E0", VA = "0x4A410E0")]
	private static void WarnAndNullifyUnityObjectReferences(VariableDeclarations declarations)
	{
	}
}
