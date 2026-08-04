// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutConfigData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FB5610", Offset = "0x4FB5610", VA = "0x4FB5610")]
		get
		{
			return default(LayoutConfigData);
		}
	}
}
