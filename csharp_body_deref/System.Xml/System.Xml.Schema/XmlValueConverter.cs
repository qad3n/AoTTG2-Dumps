using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000268")]
internal abstract class XmlValueConverter
{
	[Token(Token = "0x600180C")]
	public abstract bool ToBoolean(long value);

	[Token(Token = "0x600180D")]
	public abstract bool ToBoolean(int value);

	[Token(Token = "0x600180E")]
	public abstract bool ToBoolean(double value);

	[Token(Token = "0x600180F")]
	public abstract bool ToBoolean(DateTime value);

	[Token(Token = "0x6001810")]
	public abstract bool ToBoolean(string value);

	[Token(Token = "0x6001811")]
	public abstract bool ToBoolean(object value);

	[Token(Token = "0x6001812")]
	public abstract int ToInt32(bool value);

	[Token(Token = "0x6001813")]
	public abstract int ToInt32(long value);

	[Token(Token = "0x6001814")]
	public abstract int ToInt32(double value);

	[Token(Token = "0x6001815")]
	public abstract int ToInt32(DateTime value);

	[Token(Token = "0x6001816")]
	public abstract int ToInt32(string value);

	[Token(Token = "0x6001817")]
	public abstract int ToInt32(object value);

	[Token(Token = "0x6001818")]
	public abstract long ToInt64(bool value);

	[Token(Token = "0x6001819")]
	public abstract long ToInt64(int value);

	[Token(Token = "0x600181A")]
	public abstract long ToInt64(double value);

	[Token(Token = "0x600181B")]
	public abstract long ToInt64(DateTime value);

	[Token(Token = "0x600181C")]
	public abstract long ToInt64(string value);

	[Token(Token = "0x600181D")]
	public abstract long ToInt64(object value);

	[Token(Token = "0x600181E")]
	public abstract decimal ToDecimal(string value);

	[Token(Token = "0x600181F")]
	public abstract decimal ToDecimal(object value);

	[Token(Token = "0x6001820")]
	public abstract double ToDouble(bool value);

	[Token(Token = "0x6001821")]
	public abstract double ToDouble(int value);

	[Token(Token = "0x6001822")]
	public abstract double ToDouble(long value);

	[Token(Token = "0x6001823")]
	public abstract double ToDouble(DateTime value);

	[Token(Token = "0x6001824")]
	public abstract double ToDouble(string value);

	[Token(Token = "0x6001825")]
	public abstract double ToDouble(object value);

	[Token(Token = "0x6001826")]
	public abstract float ToSingle(double value);

	[Token(Token = "0x6001827")]
	public abstract float ToSingle(string value);

	[Token(Token = "0x6001828")]
	public abstract float ToSingle(object value);

	[Token(Token = "0x6001829")]
	public abstract DateTime ToDateTime(bool value);

	[Token(Token = "0x600182A")]
	public abstract DateTime ToDateTime(int value);

	[Token(Token = "0x600182B")]
	public abstract DateTime ToDateTime(long value);

	[Token(Token = "0x600182C")]
	public abstract DateTime ToDateTime(double value);

	[Token(Token = "0x600182D")]
	public abstract DateTime ToDateTime(DateTimeOffset value);

	[Token(Token = "0x600182E")]
	public abstract DateTime ToDateTime(string value);

	[Token(Token = "0x600182F")]
	public abstract DateTime ToDateTime(object value);

	[Token(Token = "0x6001830")]
	public abstract DateTimeOffset ToDateTimeOffset(DateTime value);

	[Token(Token = "0x6001831")]
	public abstract DateTimeOffset ToDateTimeOffset(string value);

	[Token(Token = "0x6001832")]
	public abstract DateTimeOffset ToDateTimeOffset(object value);

	[Token(Token = "0x6001833")]
	public abstract string ToString(bool value);

	[Token(Token = "0x6001834")]
	public abstract string ToString(int value);

	[Token(Token = "0x6001835")]
	public abstract string ToString(long value);

	[Token(Token = "0x6001836")]
	public abstract string ToString(decimal value);

	[Token(Token = "0x6001837")]
	public abstract string ToString(float value);

	[Token(Token = "0x6001838")]
	public abstract string ToString(double value);

	[Token(Token = "0x6001839")]
	public abstract string ToString(DateTime value);

	[Token(Token = "0x600183A")]
	public abstract string ToString(DateTimeOffset value);

	[Token(Token = "0x600183B")]
	public abstract string ToString(object value);

	[Token(Token = "0x600183C")]
	public abstract string ToString(object value, IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x600183D")]
	public abstract object ChangeType(bool value, Type destinationType);

	[Token(Token = "0x600183E")]
	public abstract object ChangeType(int value, Type destinationType);

	[Token(Token = "0x600183F")]
	public abstract object ChangeType(long value, Type destinationType);

	[Token(Token = "0x6001840")]
	public abstract object ChangeType(decimal value, Type destinationType);

	[Token(Token = "0x6001841")]
	public abstract object ChangeType(double value, Type destinationType);

	[Token(Token = "0x6001842")]
	public abstract object ChangeType(DateTime value, Type destinationType);

	[Token(Token = "0x6001843")]
	public abstract object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6001844")]
	public abstract object ChangeType(object value, Type destinationType);

	[Token(Token = "0x6001845")]
	public abstract object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x4403730", Offset = "0x4403730", VA = "0x4403730")]
	protected XmlValueConverter()
	{
	}
}
