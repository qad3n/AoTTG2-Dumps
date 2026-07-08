using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000156")]
internal class EnumMap : ObjectMap
{
	[Token(Token = "0x2000157")]
	public class EnumMapMember
	{
		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _xmlName;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x18")]
		private readonly string _enumName;

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x20")]
		private readonly long _value;

		[Token(Token = "0x170003DD")]
		public string XmlName
		{
			[Token(Token = "0x6000F10")]
			[Address(RVA = "0x4500040", Offset = "0x4500040", VA = "0x4500040")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DE")]
		public string EnumName
		{
			[Token(Token = "0x6000F11")]
			[Address(RVA = "0x4500050", Offset = "0x4500050", VA = "0x4500050")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DF")]
		public long Value
		{
			[Token(Token = "0x6000F12")]
			[Address(RVA = "0x4500060", Offset = "0x4500060", VA = "0x4500060")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x44FFFF0", Offset = "0x44FFFF0", VA = "0x44FFFF0")]
		public EnumMapMember(string xmlName, string enumName, long value)
		{
		}
	}

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x10")]
	private readonly EnumMapMember[] _members;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _isFlags;

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x20")]
	private readonly string[] _enumNames;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x28")]
	private readonly string[] _xmlNames;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x30")]
	private readonly long[] _values;

	[Token(Token = "0x170003D9")]
	public bool IsFlags
	{
		[Token(Token = "0x6000F09")]
		[Address(RVA = "0x44FFBF0", Offset = "0x44FFBF0", VA = "0x44FFBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public string[] EnumNames
	{
		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x44FFC00", Offset = "0x44FFC00", VA = "0x44FFC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DB")]
	public string[] XmlNames
	{
		[Token(Token = "0x6000F0B")]
		[Address(RVA = "0x44FFC10", Offset = "0x44FFC10", VA = "0x44FFC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public long[] Values
	{
		[Token(Token = "0x6000F0C")]
		[Address(RVA = "0x44FFC20", Offset = "0x44FFC20", VA = "0x44FFC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x44FFA40", Offset = "0x44FFA40", VA = "0x44FFA40")]
	public EnumMap(EnumMapMember[] members, bool isFlags)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x44F8AF0", Offset = "0x44F8AF0", VA = "0x44F8AF0")]
	public string GetXmlName(string typeName, object enumValue)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x44FFC30", Offset = "0x44FFC30", VA = "0x44FFC30")]
	public string GetEnumName(string typeName, string xmlName)
	{
		return null;
	}
}
