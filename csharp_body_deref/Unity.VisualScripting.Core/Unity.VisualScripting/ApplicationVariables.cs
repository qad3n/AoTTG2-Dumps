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
	[Token(Token = "0x4000939")]
	public const string assetPath = "ApplicationVariables";

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x0")]
	private static VariablesAsset _asset;

	[Token(Token = "0x170001DB")]
	public static VariablesAsset asset
	{
		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x4D63EB0", Offset = "0x4D63EB0", VA = "0x4D63EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public static VariableDeclarations runtime
	{
		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x4D63FE0", Offset = "0x4D63FE0", VA = "0x4D63FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x4D64020", Offset = "0x4D64020", VA = "0x4D64020")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	public static VariableDeclarations initial
	{
		[Token(Token = "0x60010EE")]
		[Address(RVA = "0x4D64070", Offset = "0x4D64070", VA = "0x4D64070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public static VariableDeclarations current
	{
		[Token(Token = "0x60010EF")]
		[Address(RVA = "0x4D64100", Offset = "0x4D64100", VA = "0x4D64100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x4D63F40", Offset = "0x4D63F40", VA = "0x4D63F40")]
	public static void Load()
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x4D641A0", Offset = "0x4D641A0", VA = "0x4D641A0")]
	public static void OnEnterEditMode()
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x4D64240", Offset = "0x4D64240", VA = "0x4D64240")]
	public static void OnExitEditMode()
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x4D61770", Offset = "0x4D61770", VA = "0x4D61770")]
	internal static void OnEnterPlayMode()
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x4D64370", Offset = "0x4D64370", VA = "0x4D64370")]
	internal static void OnExitPlayMode()
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x4D64250", Offset = "0x4D64250", VA = "0x4D64250")]
	private static void CreateRuntimeDeclarations()
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x4D641F0", Offset = "0x4D641F0", VA = "0x4D641F0")]
	private static void DestroyRuntimeDeclarations()
	{
	}
}
