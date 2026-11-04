// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000022")]
public readonly struct BindingContext
{
	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_TargetElement;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x8")]
	private readonly BindingId m_BindingId;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0xA0")]
	private readonly PropertyPath m_DataSourcePath;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x130")]
	private readonly object m_DataSource;

	[Token(Token = "0x17000024")]
	public VisualElement targetElement
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public BindingId bindingId
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x180F970", Offset = "0x180DF70", VA = "0x18180F970")]
		get
		{
			return default(BindingId);
		}
	}

	[Token(Token = "0x17000026")]
	public PropertyPath dataSourcePath
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3084C50", Offset = "0x3083250", VA = "0x183084C50")]
		get
		{
			return default(PropertyPath);
		}
	}

	[Token(Token = "0x17000027")]
	public object dataSource
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x2CF3C00", Offset = "0x2CF2200", VA = "0x182CF3C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3084AF0", Offset = "0x30830F0", VA = "0x183084AF0")]
	internal BindingContext(VisualElement targetElement, in BindingId bindingId, in PropertyPath resolvedDataSourcePath, object resolvedDataSource)
	{
	}
}
