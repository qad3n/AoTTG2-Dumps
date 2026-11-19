// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutConfig
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BBB4C0", Offset = "0x6BBA4C0", VA = "0x6BBB4C0")]
		get
		{
			return default(LayoutConfig);
		}
	}

	[Token(Token = "0x17000AB1")]
	public LayoutHandle Handle
	{
		[Token(Token = "0x6002BC7")]
		[Address(RVA = "0x6BBB520", Offset = "0x6BBA520", VA = "0x6BBB520")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x17000AB2")]
	public unsafe ref float PointScaleFactor
	{
		[Token(Token = "0x6002BC8")]
		[Address(RVA = "0x6BBB530", Offset = "0x6BBA530", VA = "0x6BBB530")]
		get
		{
			return ref *(float*)null;
		}
	}

	[Token(Token = "0x17000AB3")]
	public LayoutMeasureFunction Measure
	{
		[Token(Token = "0x6002BC9")]
		[Address(RVA = "0x6BBB580", Offset = "0x6BBA580", VA = "0x6BBB580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BCA")]
		[Address(RVA = "0x6BBB5F0", Offset = "0x6BBA5F0", VA = "0x6BBB5F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AB4")]
	public LayoutBaselineFunction Baseline
	{
		[Token(Token = "0x6002BCB")]
		[Address(RVA = "0x6BBB660", Offset = "0x6BBA660", VA = "0x6BBB660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BC6")]
	[Address(RVA = "0x6BBB4F0", Offset = "0x6BBA4F0", VA = "0x6BBB4F0")]
	internal LayoutConfig(LayoutDataAccess access, LayoutHandle handle)
	{
	}
}
