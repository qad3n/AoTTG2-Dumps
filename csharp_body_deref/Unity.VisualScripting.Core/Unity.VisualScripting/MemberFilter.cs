using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000F1")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class MemberFilter : Attribute, ICloneable
{
	[Token(Token = "0x17000145")]
	public bool Fields
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x49A4450", Offset = "0x49A4450", VA = "0x49A4450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x49A4460", Offset = "0x49A4460", VA = "0x49A4460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public bool Properties
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x49A4470", Offset = "0x49A4470", VA = "0x49A4470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x49A4480", Offset = "0x49A4480", VA = "0x49A4480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public bool Methods
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x49A4490", Offset = "0x49A4490", VA = "0x49A4490")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x49A44A0", Offset = "0x49A44A0", VA = "0x49A44A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public bool Constructors
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x49A44B0", Offset = "0x49A44B0", VA = "0x49A44B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x49A44C0", Offset = "0x49A44C0", VA = "0x49A44C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public bool Gettable
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x49A44D0", Offset = "0x49A44D0", VA = "0x49A44D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x49A44E0", Offset = "0x49A44E0", VA = "0x49A44E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public bool Settable
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x49A44F0", Offset = "0x49A44F0", VA = "0x49A44F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x49A4500", Offset = "0x49A4500", VA = "0x49A4500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public bool Inherited
	{
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x49A4510", Offset = "0x49A4510", VA = "0x49A4510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000621")]
		[Address(RVA = "0x49A4520", Offset = "0x49A4520", VA = "0x49A4520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public bool Targeted
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x49A4530", Offset = "0x49A4530", VA = "0x49A4530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000623")]
		[Address(RVA = "0x49A4540", Offset = "0x49A4540", VA = "0x49A4540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public bool NonTargeted
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x49A4550", Offset = "0x49A4550", VA = "0x49A4550")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000625")]
		[Address(RVA = "0x49A4560", Offset = "0x49A4560", VA = "0x49A4560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014E")]
	public bool Public
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x49A4570", Offset = "0x49A4570", VA = "0x49A4570")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x49A4580", Offset = "0x49A4580", VA = "0x49A4580")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700014F")]
	public bool NonPublic
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x49A4590", Offset = "0x49A4590", VA = "0x49A4590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x49A45A0", Offset = "0x49A45A0", VA = "0x49A45A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000150")]
	public bool ReadOnly
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x49A45B0", Offset = "0x49A45B0", VA = "0x49A45B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x49A45C0", Offset = "0x49A45C0", VA = "0x49A45C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000151")]
	public bool WriteOnly
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x49A45D0", Offset = "0x49A45D0", VA = "0x49A45D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600062D")]
		[Address(RVA = "0x49A45E0", Offset = "0x49A45E0", VA = "0x49A45E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public bool Extensions
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x49A45F0", Offset = "0x49A45F0", VA = "0x49A45F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x49A4600", Offset = "0x49A4600", VA = "0x49A4600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public bool Operators
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x49A4610", Offset = "0x49A4610", VA = "0x49A4610")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x49A4620", Offset = "0x49A4620", VA = "0x49A4620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	public bool Conversions
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x49A4630", Offset = "0x49A4630", VA = "0x49A4630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x49A4640", Offset = "0x49A4640", VA = "0x49A4640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public bool Setters
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x49A4650", Offset = "0x49A4650", VA = "0x49A4650")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x49A4660", Offset = "0x49A4660", VA = "0x49A4660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	public bool Parameters
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x49A4670", Offset = "0x49A4670", VA = "0x49A4670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x49A4680", Offset = "0x49A4680", VA = "0x49A4680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	public bool Obsolete
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x49A4690", Offset = "0x49A4690", VA = "0x49A4690")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x49A46A0", Offset = "0x49A46A0", VA = "0x49A46A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	public bool OpenConstructedGeneric
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x49A46B0", Offset = "0x49A46B0", VA = "0x49A46B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x49A46C0", Offset = "0x49A46C0", VA = "0x49A46C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	public bool TypeInitializers
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x49A46D0", Offset = "0x49A46D0", VA = "0x49A46D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x49A46E0", Offset = "0x49A46E0", VA = "0x49A46E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700015A")]
	public bool ClsNonCompliant
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x49A46F0", Offset = "0x49A46F0", VA = "0x49A46F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x49A4700", Offset = "0x49A4700", VA = "0x49A4700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700015B")]
	public BindingFlags validBindingFlags
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x49A4710", Offset = "0x49A4710", VA = "0x49A4710")]
		get
		{
			return default(BindingFlags);
		}
	}

	[Token(Token = "0x1700015C")]
	public MemberTypes validMemberTypes
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x49A4760", Offset = "0x49A4760", VA = "0x49A4760")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x1700015D")]
	public static MemberFilter Any
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x49A5ED0", Offset = "0x49A5ED0", VA = "0x49A5ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x49A4410", Offset = "0x49A4410", VA = "0x49A4410")]
	public MemberFilter()
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x49A47C0", Offset = "0x49A47C0", VA = "0x49A47C0", Slot = "7")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x49A47D0", Offset = "0x49A47D0", VA = "0x49A47D0")]
	public MemberFilter Clone()
	{
		return null;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x49A4880", Offset = "0x49A4880", VA = "0x49A4880", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x49A4AC0", Offset = "0x49A4AC0", VA = "0x49A4AC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x49A4DA0", Offset = "0x49A4DA0", VA = "0x49A4DA0")]
	public bool ValidateMember(MemberInfo member, [Optional] TypeFilter typeFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x49A58C0", Offset = "0x49A58C0", VA = "0x49A58C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
