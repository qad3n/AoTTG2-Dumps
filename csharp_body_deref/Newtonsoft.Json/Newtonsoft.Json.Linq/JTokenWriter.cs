// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JTokenWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200018B")]
public class JTokenWriter : JsonWriter
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x60")]
	private JContainer? _token;

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x68")]
	private JContainer? _parent;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x70")]
	private JValue? _value;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x78")]
	private JToken? _current;

	[Token(Token = "0x1700022F")]
	public JToken? CurrentToken
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x561E420", Offset = "0x561D420", VA = "0x561E420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public JToken? Token
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x561E430", Offset = "0x561D430", VA = "0x561E430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x561E330", Offset = "0x561D330", VA = "0x561E330", Slot = "24")]
	internal override Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x561E450", Offset = "0x561D450", VA = "0x561E450")]
	public JTokenWriter(JContainer container)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x561E4F0", Offset = "0x561D4F0", VA = "0x561E4F0")]
	public JTokenWriter()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x561E560", Offset = "0x561D560", VA = "0x561E560", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x561E570", Offset = "0x561D570", VA = "0x561E570", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x561E580", Offset = "0x561D580", VA = "0x561E580", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x561E620", Offset = "0x561D620", VA = "0x561E620")]
	private void AddParent(JContainer container)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x561E680", Offset = "0x561D680", VA = "0x561E680")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x561E6F0", Offset = "0x561D6F0", VA = "0x561E6F0", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x561E790", Offset = "0x561D790", VA = "0x561E790", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x561E840", Offset = "0x561D840", VA = "0x561E840", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x561E850", Offset = "0x561D850", VA = "0x561E850", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x561E950", Offset = "0x561D950", VA = "0x561E950")]
	private void AddRawValue(object? value, JTokenType type, JsonToken token)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x561EA70", Offset = "0x561DA70", VA = "0x561EA70")]
	internal void AddJValue(JValue? value, JsonToken token)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x561EBD0", Offset = "0x561DBD0", VA = "0x561EBD0", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x561EC50", Offset = "0x561DC50", VA = "0x561EC50", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x561EC70", Offset = "0x561DC70", VA = "0x561EC70", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x561ED20", Offset = "0x561DD20", VA = "0x561ED20", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x561ED90", Offset = "0x561DD90", VA = "0x561ED90", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x561EEE0", Offset = "0x561DEE0", VA = "0x561EEE0", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x561F000", Offset = "0x561E000", VA = "0x561F000", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x561F050", Offset = "0x561E050", VA = "0x561F050", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x561F0A0", Offset = "0x561E0A0", VA = "0x561F0A0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x561F1C0", Offset = "0x561E1C0", VA = "0x561F1C0", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x561F320", Offset = "0x561E320", VA = "0x561F320", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x561F4A0", Offset = "0x561E4A0", VA = "0x561F4A0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x561F5D0", Offset = "0x561E5D0", VA = "0x561F5D0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x561F6E0", Offset = "0x561E6E0", VA = "0x561F6E0", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x561F730", Offset = "0x561E730", VA = "0x561F730", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x561F780", Offset = "0x561E780", VA = "0x561F780", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x561F8A0", Offset = "0x561E8A0", VA = "0x561F8A0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x561F8F0", Offset = "0x561E8F0", VA = "0x561F8F0", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x561F940", Offset = "0x561E940", VA = "0x561F940", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x561FA70", Offset = "0x561EA70", VA = "0x561FA70", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x561FBB0", Offset = "0x561EBB0", VA = "0x561FBB0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x561FCE0", Offset = "0x561ECE0", VA = "0x561FCE0", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x561FD90", Offset = "0x561ED90", VA = "0x561FD90", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x561FEA0", Offset = "0x561EEA0", VA = "0x561FEA0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x561FFD0", Offset = "0x561EFD0", VA = "0x561FFD0", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x5620170", Offset = "0x561F170", VA = "0x5620170", Slot = "77")]
	internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}
}
