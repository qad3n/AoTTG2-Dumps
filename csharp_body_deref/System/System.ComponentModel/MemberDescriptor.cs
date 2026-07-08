using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000301")]
[ComVisible(true)]
public abstract class MemberDescriptor
{
	[Token(Token = "0x4000E57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4000E58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string displayName;

	[Token(Token = "0x4000E59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int nameHash;

	[Token(Token = "0x4000E5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AttributeCollection attributeCollection;

	[Token(Token = "0x4000E5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Attribute[] attributes;

	[Token(Token = "0x4000E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Attribute[] originalAttributes;

	[Token(Token = "0x4000E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool attributesFiltered;

	[Token(Token = "0x4000E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool attributesFilled;

	[Token(Token = "0x4000E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private int metadataVersion;

	[Token(Token = "0x4000E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string category;

	[Token(Token = "0x4000E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string description;

	[Token(Token = "0x4000E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object lockCookie;

	[Token(Token = "0x17000463")]
	protected virtual Attribute[] AttributeArray
	{
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x458F1D0", Offset = "0x458F1D0", VA = "0x458F1D0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x458FCB0", Offset = "0x458FCB0", VA = "0x458FCB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000464")]
	public virtual AttributeCollection Attributes
	{
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x458FDB0", Offset = "0x458FDB0", VA = "0x458FDB0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000465")]
	public virtual string Category
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x458FEC0", Offset = "0x458FEC0", VA = "0x458FEC0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000466")]
	public virtual string Description
	{
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x4590000", Offset = "0x4590000", VA = "0x4590000", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000467")]
	public virtual bool IsBrowsable
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x4590130", Offset = "0x4590130", VA = "0x4590130", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000468")]
	public virtual string Name
	{
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x45901F0", Offset = "0x45901F0", VA = "0x45901F0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000469")]
	protected virtual int NameHashCode
	{
		[Token(Token = "0x600136F")]
		[Address(RVA = "0x4590230", Offset = "0x4590230", VA = "0x4590230", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700046A")]
	public virtual bool DesignTimeOnly
	{
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x4590240", Offset = "0x4590240", VA = "0x4590240", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700046B")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6001371")]
		[Address(RVA = "0x4590320", Offset = "0x4590320", VA = "0x4590320", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x458F1C0", Offset = "0x458F1C0", VA = "0x458F1C0")]
	protected MemberDescriptor(string name)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x457C320", Offset = "0x457C320", VA = "0x457C320")]
	protected MemberDescriptor(string name, Attribute[] attributes)
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x457C540", Offset = "0x457C540", VA = "0x457C540")]
	protected MemberDescriptor(MemberDescriptor descr)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x457C6B0", Offset = "0x457C6B0", VA = "0x457C6B0")]
	protected MemberDescriptor(MemberDescriptor oldMemberDescriptor, Attribute[] newAttributes)
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x458F1F0", Offset = "0x458F1F0", VA = "0x458F1F0")]
	private void CheckAttributesValid()
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x4590430", Offset = "0x4590430", VA = "0x4590430", Slot = "14")]
	protected virtual AttributeCollection CreateAttributeCollection()
	{
		return null;
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x45904A0", Offset = "0x45904A0", VA = "0x45904A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x457D8B0", Offset = "0x457D8B0", VA = "0x457D8B0", Slot = "15")]
	protected virtual void FillAttributes(IList attributeList)
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x458F2C0", Offset = "0x458F2C0", VA = "0x458F2C0")]
	private void FilterAttributesIfNeeded()
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x4584310", Offset = "0x4584310", VA = "0x4584310")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x45906D0", Offset = "0x45906D0", VA = "0x45906D0")]
	protected static MethodInfo FindMethod(Type componentClass, string name, Type[] args, Type returnType, bool publicOnly)
	{
		return null;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x4590780", Offset = "0x4590780", VA = "0x4590780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x457E050", Offset = "0x457E050", VA = "0x457E050", Slot = "16")]
	protected virtual object GetInvocationTarget(Type type, object instance)
	{
		return null;
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x45833D0", Offset = "0x45833D0", VA = "0x45833D0")]
	protected static ISite GetSite(object component)
	{
		return null;
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x4590790", Offset = "0x4590790", VA = "0x4590790")]
	[Obsolete("This method has been deprecated. Use GetInvocationTarget instead.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected static object GetInvokee(Type componentClass, object component)
	{
		return null;
	}
}
