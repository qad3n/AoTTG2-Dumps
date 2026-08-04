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
		[Address(RVA = "0x3E2ADB0", Offset = "0x3E2ADB0", VA = "0x3E2ADB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public JToken? Token
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x3E2ADC0", Offset = "0x3E2ADC0", VA = "0x3E2ADC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x3E2ACC0", Offset = "0x3E2ACC0", VA = "0x3E2ACC0", Slot = "24")]
	internal override Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x3E2ADE0", Offset = "0x3E2ADE0", VA = "0x3E2ADE0")]
	public JTokenWriter(JContainer container)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x3E2AE80", Offset = "0x3E2AE80", VA = "0x3E2AE80")]
	public JTokenWriter()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x3E2AEF0", Offset = "0x3E2AEF0", VA = "0x3E2AEF0", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x3E2AF00", Offset = "0x3E2AF00", VA = "0x3E2AF00", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x3E2AF10", Offset = "0x3E2AF10", VA = "0x3E2AF10", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x3E2AFB0", Offset = "0x3E2AFB0", VA = "0x3E2AFB0")]
	private void AddParent(JContainer container)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x3E2B010", Offset = "0x3E2B010", VA = "0x3E2B010")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x3E2B080", Offset = "0x3E2B080", VA = "0x3E2B080", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x3E2B120", Offset = "0x3E2B120", VA = "0x3E2B120", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x3E2B1D0", Offset = "0x3E2B1D0", VA = "0x3E2B1D0", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x3E2B1E0", Offset = "0x3E2B1E0", VA = "0x3E2B1E0", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x3E2B2E0", Offset = "0x3E2B2E0", VA = "0x3E2B2E0")]
	private void AddRawValue(object? value, JTokenType type, JsonToken token)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x3E2B400", Offset = "0x3E2B400", VA = "0x3E2B400")]
	internal void AddJValue(JValue? value, JsonToken token)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x3E2B560", Offset = "0x3E2B560", VA = "0x3E2B560", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x3E2B5E0", Offset = "0x3E2B5E0", VA = "0x3E2B5E0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x3E2B600", Offset = "0x3E2B600", VA = "0x3E2B600", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x3E2B6B0", Offset = "0x3E2B6B0", VA = "0x3E2B6B0", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x3E2B720", Offset = "0x3E2B720", VA = "0x3E2B720", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x3E2B870", Offset = "0x3E2B870", VA = "0x3E2B870", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x3E2B990", Offset = "0x3E2B990", VA = "0x3E2B990", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x3E2B9E0", Offset = "0x3E2B9E0", VA = "0x3E2B9E0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x3E2BA30", Offset = "0x3E2BA30", VA = "0x3E2BA30", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x3E2BB50", Offset = "0x3E2BB50", VA = "0x3E2BB50", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x3E2BCB0", Offset = "0x3E2BCB0", VA = "0x3E2BCB0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x3E2BE30", Offset = "0x3E2BE30", VA = "0x3E2BE30", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x3E2BF60", Offset = "0x3E2BF60", VA = "0x3E2BF60", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x3E2C070", Offset = "0x3E2C070", VA = "0x3E2C070", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x3E2C0C0", Offset = "0x3E2C0C0", VA = "0x3E2C0C0", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x3E2C110", Offset = "0x3E2C110", VA = "0x3E2C110", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x3E2C230", Offset = "0x3E2C230", VA = "0x3E2C230", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x3E2C280", Offset = "0x3E2C280", VA = "0x3E2C280", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x3E2C2D0", Offset = "0x3E2C2D0", VA = "0x3E2C2D0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x3E2C400", Offset = "0x3E2C400", VA = "0x3E2C400", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x3E2C540", Offset = "0x3E2C540", VA = "0x3E2C540", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x3E2C680", Offset = "0x3E2C680", VA = "0x3E2C680", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x3E2C730", Offset = "0x3E2C730", VA = "0x3E2C730", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x3E2C840", Offset = "0x3E2C840", VA = "0x3E2C840", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x3E2C970", Offset = "0x3E2C970", VA = "0x3E2C970", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x3E2CA90", Offset = "0x3E2CA90", VA = "0x3E2CA90", Slot = "77")]
	internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}
}
