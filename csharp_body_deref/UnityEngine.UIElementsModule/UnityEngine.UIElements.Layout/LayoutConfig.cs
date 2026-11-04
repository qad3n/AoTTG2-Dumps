// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutConfig
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005E9")]
internal readonly struct LayoutConfig
{
	[Token(Token = "0x4001618")]
	[FieldOffset(Offset = "0x0")]
	private readonly LayoutDataAccess m_Access;

	[Token(Token = "0x4001619")]
	[FieldOffset(Offset = "0x38")]
	private readonly LayoutHandle m_Handle;

	[Token(Token = "0x17000AB0")]
	public static LayoutConfig Undefined
	{
		[Token(Token = "0x6002BC5")]
		[Address(RVA = "0x31A3DB0", Offset = "0x31A23B0", VA = "0x1831A3DB0")]
		get
		{
			return default(LayoutConfig);
		}
	}

	[Token(Token = "0x17000AB1")]
	public LayoutHandle Handle
	{
		[Token(Token = "0x6002BC7")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x17000AB2")]
	public unsafe ref float PointScaleFactor
	{
		[Token(Token = "0x6002BC8")]
		[Address(RVA = "0x31A3D50", Offset = "0x31A2350", VA = "0x1831A3D50")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000AB3")]
	public LayoutMeasureFunction Measure
	{
		[Token(Token = "0x6002BC9")]
		[Address(RVA = "0x31A3C60", Offset = "0x31A2260", VA = "0x1831A3C60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BCA")]
		[Address(RVA = "0x31A3DD0", Offset = "0x31A23D0", VA = "0x1831A3DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AB4")]
	public LayoutBaselineFunction Baseline
	{
		[Token(Token = "0x6002BCB")]
		[Address(RVA = "0x31A3B70", Offset = "0x31A2170", VA = "0x1831A3B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BC6")]
	[Address(RVA = "0x31A3B40", Offset = "0x31A2140", VA = "0x1831A3B40")]
	internal LayoutConfig(LayoutDataAccess access, LayoutHandle handle)
	{
	}
}
