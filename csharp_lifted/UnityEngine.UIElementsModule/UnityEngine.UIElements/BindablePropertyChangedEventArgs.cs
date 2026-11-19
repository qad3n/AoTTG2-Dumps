// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindablePropertyChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000045")]
public readonly struct BindablePropertyChangedEventArgs
{
	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x0")]
	private readonly BindingId m_PropertyName;

	[Token(Token = "0x17000049")]
	public BindingId propertyName
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x6A88BF0", Offset = "0x6A87BF0", VA = "0x6A88BF0")]
		get
		{
			return default(BindingId);
		}
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x6A88BD0", Offset = "0x6A87BD0", VA = "0x6A88BD0")]
	public BindablePropertyChangedEventArgs(in BindingId propertyName)
	{
	}
}
