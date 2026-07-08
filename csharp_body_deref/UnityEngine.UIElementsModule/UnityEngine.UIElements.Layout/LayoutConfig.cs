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
		[Address(RVA = "0x4C8C980", Offset = "0x4C8C980", VA = "0x4C8C980")]
		get
		{
			return default(LayoutConfig);
		}
	}

	[Token(Token = "0x170007A1")]
	public bool IsUndefined
	{
		[Token(Token = "0x6001E89")]
		[Address(RVA = "0x4C8C9D0", Offset = "0x4C8C9D0", VA = "0x4C8C9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007A2")]
	public LayoutHandle Handle
	{
		[Token(Token = "0x6001E8A")]
		[Address(RVA = "0x4C8CA10", Offset = "0x4C8CA10", VA = "0x4C8CA10")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x170007A3")]
	public unsafe ref bool UseWebDefaults
	{
		[Token(Token = "0x6001E8B")]
		[Address(RVA = "0x4C8CA20", Offset = "0x4C8CA20", VA = "0x4C8CA20")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170007A4")]
	public unsafe ref float PointScaleFactor
	{
		[Token(Token = "0x6001E8C")]
		[Address(RVA = "0x4C8CA90", Offset = "0x4C8CA90", VA = "0x4C8CA90")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x6001E88")]
	[Address(RVA = "0x4C8C9B0", Offset = "0x4C8C9B0", VA = "0x4C8C9B0")]
	internal LayoutConfig(LayoutDataAccess access, LayoutHandle handle)
	{
	}
}
