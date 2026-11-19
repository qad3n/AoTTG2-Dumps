// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ApplicationVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CA")]
public static class ApplicationVariables
{
	[Token(Token = "0x4000937")]
	public const string assetPath = "ApplicationVariables";

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001DE")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x684E240", Offset = "0x684D240", VA = "0x684E240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public static VariableDeclarations runtime
	{
		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x684E370", Offset = "0x684D370", VA = "0x684E370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x684E3B0", Offset = "0x684D3B0", VA = "0x684E3B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0x684E400", Offset = "0x684D400", VA = "0x684E400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x684E490", Offset = "0x684D490", VA = "0x684E490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x684E2D0", Offset = "0x684D2D0", VA = "0x684E2D0")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x684E530", Offset = "0x684D530", VA = "0x684E530")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x684E5D0", Offset = "0x684D5D0", VA = "0x684E5D0")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x684BB30", Offset = "0x684AB30", VA = "0x684BB30")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x684E700", Offset = "0x684D700", VA = "0x684E700")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x684E5E0", Offset = "0x684D5E0", VA = "0x684E5E0")]
	private static void CreateRuntimeDeclarations()
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x684E580", Offset = "0x684D580", VA = "0x684E580")]
	private static void DestroyRuntimeDeclarations()
	{
	}
}
