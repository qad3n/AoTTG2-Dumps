// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseUxmlFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200050A")]
[Obsolete("BaseUxmlFactory<TCreatedType, TTraits> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public abstract class BaseUxmlFactory<TCreatedType, TTraits> where TCreatedType : new() where TTraits : BaseUxmlTraits, new()
{
	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x0")]
	internal TTraits m_Traits;

	[Token(Token = "0x170009EC")]
	public virtual string uxmlName
	{
		[Token(Token = "0x60026B8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009ED")]
	public virtual string uxmlNamespace
	{
		[Token(Token = "0x60026B9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009EE")]
	public virtual string uxmlQualifiedName
	{
		[Token(Token = "0x60026BA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009EF")]
	public virtual Type uxmlType
	{
		[Token(Token = "0x60026BB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60026B7")]
	protected BaseUxmlFactory()
	{
	}

	[Token(Token = "0x60026BC")]
	public virtual bool AcceptsAttributeBag(IUxmlAttributes bag, CreationContext cc)
	{
		return default(bool);
	}
}
