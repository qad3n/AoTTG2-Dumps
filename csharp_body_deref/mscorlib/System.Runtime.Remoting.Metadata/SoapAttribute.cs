// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Metadata.SoapAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Metadata;

[Token(Token = "0x200038F")]
[ComVisible(true)]
public class SoapAttribute : Attribute
{
	[Token(Token = "0x4000F1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool _useAttribute;

	[Token(Token = "0x4000F1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected string ProtXmlNamespace;

	[Token(Token = "0x4000F20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected object ReflectInfo;

	[Token(Token = "0x17000388")]
	public virtual bool UseAttribute
	{
		[Token(Token = "0x6001DCD")]
		[Address(RVA = "0x3B84260", Offset = "0x3B84260", VA = "0x3B84260", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000389")]
	public virtual string XmlNamespace
	{
		[Token(Token = "0x6001DCE")]
		[Address(RVA = "0x3B84270", Offset = "0x3B84270", VA = "0x3B84270", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x3B84250", Offset = "0x3B84250", VA = "0x3B84250")]
	public SoapAttribute()
	{
	}

	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x3B84280", Offset = "0x3B84280", VA = "0x3B84280", Slot = "9")]
	internal virtual void SetReflectionObject(object reflectionObject)
	{
	}
}
