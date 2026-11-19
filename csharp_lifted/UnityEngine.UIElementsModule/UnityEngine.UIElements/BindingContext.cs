// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A7E180", Offset = "0x6A7D180", VA = "0x6A7E180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public BindingId bindingId
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x6A7E190", Offset = "0x6A7D190", VA = "0x6A7E190")]
		get
		{
			return default(BindingId);
		}
	}

	[Token(Token = "0x17000026")]
	public PropertyPath dataSourcePath
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x6A7E1B0", Offset = "0x6A7D1B0", VA = "0x6A7E1B0")]
		get
		{
			return default(PropertyPath);
		}
	}

	[Token(Token = "0x17000027")]
	public object dataSource
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x6A7E1D0", Offset = "0x6A7D1D0", VA = "0x6A7E1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x6A7E1E0", Offset = "0x6A7D1E0", VA = "0x6A7E1E0")]
	internal BindingContext(VisualElement targetElement, in BindingId bindingId, in PropertyPath resolvedDataSourcePath, object resolvedDataSource)
	{
	}
}
