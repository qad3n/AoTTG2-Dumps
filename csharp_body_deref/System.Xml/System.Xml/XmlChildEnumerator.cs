using System.Collections;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009C")]
internal sealed class XmlChildEnumerator : IEnumerator
{
	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x10")]
	internal XmlNode container;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x18")]
	internal XmlNode child;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x20")]
	internal bool isFirst;

	[Token(Token = "0x170001F0")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x448DDF0", Offset = "0x448DDF0", VA = "0x448DDF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F1")]
	internal XmlNode Current
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x448DE00", Offset = "0x448DE00", VA = "0x448DE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x448DC50", Offset = "0x448DC50", VA = "0x448DC50")]
	internal XmlChildEnumerator(XmlNode container)
	{
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x448DCB0", Offset = "0x448DCB0", VA = "0x448DCB0", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x448DD30", Offset = "0x448DD30", VA = "0x448DD30")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x448DDB0", Offset = "0x448DDB0", VA = "0x448DDB0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
