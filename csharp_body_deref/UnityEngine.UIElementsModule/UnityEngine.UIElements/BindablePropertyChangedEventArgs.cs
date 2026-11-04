// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindablePropertyChangedEventArgs
// Update status: NEW in this game update
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
		[Address(RVA = "0x180D590", Offset = "0x180BB90", VA = "0x18180D590")]
		get
		{
			return default(BindingId);
		}
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3084990", Offset = "0x3082F90", VA = "0x183084990")]
	public BindablePropertyChangedEventArgs(in BindingId propertyName)
	{
	}
}
