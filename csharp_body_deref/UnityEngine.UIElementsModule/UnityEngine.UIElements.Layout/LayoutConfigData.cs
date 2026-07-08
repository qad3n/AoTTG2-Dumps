using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200050B")]
internal struct LayoutConfigData
{
	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x0")]
	public float PointScaleFactor;

	[Token(Token = "0x40010CF")]
	[FieldOffset(Offset = "0x4")]
	public bool UseWebDefaults;

	[Token(Token = "0x40010D0")]
	[FieldOffset(Offset = "0x5")]
	public bool UseLegacyStretchBehaviour;

	[Token(Token = "0x170007F1")]
	public static LayoutConfigData Default
	{
		[Token(Token = "0x6001F26")]
		[Address(RVA = "0x4C8DCE0", Offset = "0x4C8DCE0", VA = "0x4C8DCE0")]
		get
		{
			return default(LayoutConfigData);
		}
	}
}
