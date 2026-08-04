// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutConfig
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004F3")]
internal readonly struct LayoutConfig
{
	[Token(Token = "0x4001083")]
	[FieldOffset(Offset = "0x0")]
	private readonly LayoutDataAccess m_Access;

	[Token(Token = "0x4001084")]
	[FieldOffset(Offset = "0x28")]
	private readonly LayoutHandle m_Handle;

	[Token(Token = "0x170007A0")]
	public static LayoutConfig Undefined
	{
		[Token(Token = "0x6001E87")]
		[Address(RVA = "0x4FB42B0", Offset = "0x4FB42B0", VA = "0x4FB42B0")]
		get
		{
			return default(LayoutConfig);
		}
	}

	[Token(Token = "0x170007A1")]
	public bool IsUndefined
	{
		[Token(Token = "0x6001E89")]
		[Address(RVA = "0x4FB4300", Offset = "0x4FB4300", VA = "0x4FB4300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007A2")]
	public LayoutHandle Handle
	{
		[Token(Token = "0x6001E8A")]
		[Address(RVA = "0x4FB4340", Offset = "0x4FB4340", VA = "0x4FB4340")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x170007A3")]
	public unsafe ref bool UseWebDefaults
	{
		[Token(Token = "0x6001E8B")]
		[Address(RVA = "0x4FB4350", Offset = "0x4FB4350", VA = "0x4FB4350")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170007A4")]
	public unsafe ref float PointScaleFactor
	{
		[Token(Token = "0x6001E8C")]
		[Address(RVA = "0x4FB43C0", Offset = "0x4FB43C0", VA = "0x4FB43C0")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x4FB42E0", Offset = "0x4FB42E0", VA = "0x4FB42E0")]
	internal LayoutConfig(LayoutDataAccess access, LayoutHandle handle)
	{
	}
}
