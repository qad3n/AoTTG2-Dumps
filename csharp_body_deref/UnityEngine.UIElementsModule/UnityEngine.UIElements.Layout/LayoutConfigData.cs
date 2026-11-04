// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutConfigData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000602")]
internal struct LayoutConfigData
{
	[Token(Token = "0x4001664")]
	[FieldOffset(Offset = "0x0")]
	public float PointScaleFactor;

	[Token(Token = "0x4001665")]
	[FieldOffset(Offset = "0x4")]
	public int ManagedMeasureFunctionIndex;

	[Token(Token = "0x4001666")]
	[FieldOffset(Offset = "0x8")]
	public int ManagedBaselineFunctionIndex;

	[Token(Token = "0x4001667")]
	[FieldOffset(Offset = "0xC")]
	public bool ShouldLog;

	[Token(Token = "0x17000B01")]
	public static LayoutConfigData Default
	{
		[Token(Token = "0x6002C73")]
		[Address(RVA = "0x31BCFA0", Offset = "0x31BB5A0", VA = "0x1831BCFA0")]
		get
		{
			return default(LayoutConfigData);
		}
	}
}
