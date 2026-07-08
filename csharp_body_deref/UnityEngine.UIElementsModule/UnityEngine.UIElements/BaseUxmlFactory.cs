using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200043D")]
public abstract class BaseUxmlFactory<TCreatedType, TTraits> where TCreatedType : new() where TTraits : BaseUxmlTraits, new()
{
	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0x0")]
	internal TTraits m_Traits;

	[Token(Token = "0x1700071D")]
	public virtual string uxmlName
	{
		[Token(Token = "0x6001AE9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071E")]
	public virtual string uxmlNamespace
	{
		[Token(Token = "0x6001AEA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071F")]
	public virtual string uxmlQualifiedName
	{
		[Token(Token = "0x6001AEB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000720")]
	public virtual Type uxmlType
	{
		[Token(Token = "0x6001AEC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AE8")]
	protected BaseUxmlFactory()
	{
	}

	[Token(Token = "0x6001AED")]
	public virtual bool AcceptsAttributeBag(IUxmlAttributes bag, CreationContext cc)
	{
		return default(bool);
	}
}
