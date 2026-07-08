using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F6")]
public class fsMetaProperty
{
	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x10")]
	internal MemberInfo _memberInfo;

	[Token(Token = "0x170001F8")]
	public Type StorageType
	{
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x4A52A10", Offset = "0x4A52A10", VA = "0x4A52A10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011F2")]
		[Address(RVA = "0x4A52A20", Offset = "0x4A52A20", VA = "0x4A52A20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public Type OverrideConverterType
	{
		[Token(Token = "0x60011F3")]
		[Address(RVA = "0x4A52A30", Offset = "0x4A52A30", VA = "0x4A52A30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011F4")]
		[Address(RVA = "0x4A52A40", Offset = "0x4A52A40", VA = "0x4A52A40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public bool CanRead
	{
		[Token(Token = "0x60011F5")]
		[Address(RVA = "0x4A52A50", Offset = "0x4A52A50", VA = "0x4A52A50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011F6")]
		[Address(RVA = "0x4A52A60", Offset = "0x4A52A60", VA = "0x4A52A60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public bool CanWrite
	{
		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x4A52A70", Offset = "0x4A52A70", VA = "0x4A52A70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011F8")]
		[Address(RVA = "0x4A52A80", Offset = "0x4A52A80", VA = "0x4A52A80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public string JsonName
	{
		[Token(Token = "0x60011F9")]
		[Address(RVA = "0x4A52A90", Offset = "0x4A52A90", VA = "0x4A52A90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011FA")]
		[Address(RVA = "0x4A52AA0", Offset = "0x4A52AA0", VA = "0x4A52AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public string MemberName
	{
		[Token(Token = "0x60011FB")]
		[Address(RVA = "0x4A52AB0", Offset = "0x4A52AB0", VA = "0x4A52AB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60011FC")]
		[Address(RVA = "0x4A52AC0", Offset = "0x4A52AC0", VA = "0x4A52AC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FE")]
	public bool IsPublic
	{
		[Token(Token = "0x60011FD")]
		[Address(RVA = "0x4A52AD0", Offset = "0x4A52AD0", VA = "0x4A52AD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x4A52AE0", Offset = "0x4A52AE0", VA = "0x4A52AE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x4A52AF0", Offset = "0x4A52AF0", VA = "0x4A52AF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x4A52B00", Offset = "0x4A52B00", VA = "0x4A52B00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x4A52700", Offset = "0x4A52700", VA = "0x4A52700")]
	internal fsMetaProperty(fsConfig config, FieldInfo field)
	{
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x4A528B0", Offset = "0x4A528B0", VA = "0x4A528B0")]
	internal fsMetaProperty(fsConfig config, PropertyInfo property)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x4A527B0", Offset = "0x4A527B0", VA = "0x4A527B0")]
	private void CommonInitialize(fsConfig config)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x4A4DCD0", Offset = "0x4A4DCD0", VA = "0x4A4DCD0")]
	public void Write(object context, object value)
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x4A4DA60", Offset = "0x4A4DA60", VA = "0x4A4DA60")]
	public object Read(object context)
	{
		return null;
	}
}
