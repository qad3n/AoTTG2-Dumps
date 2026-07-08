using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200016F")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
public sealed class TypeFilter : Attribute, ICloneable
{
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x10")]
	private readonly HashSet<Type> types;

	[Token(Token = "0x1700017F")]
	public TypesMatching Matching
	{
		[Token(Token = "0x6000EA9")]
		[Address(RVA = "0x4A28730", Offset = "0x4A28730", VA = "0x4A28730")]
		[CompilerGenerated]
		get
		{
			return default(TypesMatching);
		}
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x4A28740", Offset = "0x4A28740", VA = "0x4A28740")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public HashSet<Type> Types
	{
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x4A28750", Offset = "0x4A28750", VA = "0x4A28750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public bool Value
	{
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x4A28760", Offset = "0x4A28760", VA = "0x4A28760")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x4A28770", Offset = "0x4A28770", VA = "0x4A28770")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000182")]
	public bool Reference
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x4A28780", Offset = "0x4A28780", VA = "0x4A28780")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x4A28790", Offset = "0x4A28790", VA = "0x4A28790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public bool Classes
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x4A287A0", Offset = "0x4A287A0", VA = "0x4A287A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB1")]
		[Address(RVA = "0x4A287B0", Offset = "0x4A287B0", VA = "0x4A287B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public bool Interfaces
	{
		[Token(Token = "0x6000EB2")]
		[Address(RVA = "0x4A287C0", Offset = "0x4A287C0", VA = "0x4A287C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x4A287D0", Offset = "0x4A287D0", VA = "0x4A287D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000185")]
	public bool Structs
	{
		[Token(Token = "0x6000EB4")]
		[Address(RVA = "0x4A287E0", Offset = "0x4A287E0", VA = "0x4A287E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x4A287F0", Offset = "0x4A287F0", VA = "0x4A287F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public bool Enums
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x4A28800", Offset = "0x4A28800", VA = "0x4A28800")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x4A28810", Offset = "0x4A28810", VA = "0x4A28810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public bool Public
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x4A28820", Offset = "0x4A28820", VA = "0x4A28820")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x4A28830", Offset = "0x4A28830", VA = "0x4A28830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public bool NonPublic
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x4A28840", Offset = "0x4A28840", VA = "0x4A28840")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x4A28850", Offset = "0x4A28850", VA = "0x4A28850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public bool Abstract
	{
		[Token(Token = "0x6000EBC")]
		[Address(RVA = "0x4A28860", Offset = "0x4A28860", VA = "0x4A28860")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x4A28870", Offset = "0x4A28870", VA = "0x4A28870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public bool Generic
	{
		[Token(Token = "0x6000EBE")]
		[Address(RVA = "0x4A28880", Offset = "0x4A28880", VA = "0x4A28880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x4A28890", Offset = "0x4A28890", VA = "0x4A28890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public bool OpenConstructedGeneric
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x4A288A0", Offset = "0x4A288A0", VA = "0x4A288A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x4A288B0", Offset = "0x4A288B0", VA = "0x4A288B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public bool Static
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x4A288C0", Offset = "0x4A288C0", VA = "0x4A288C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x4A288D0", Offset = "0x4A288D0", VA = "0x4A288D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public bool Sealed
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x4A288E0", Offset = "0x4A288E0", VA = "0x4A288E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x4A288F0", Offset = "0x4A288F0", VA = "0x4A288F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public bool Nested
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x4A28900", Offset = "0x4A28900", VA = "0x4A28900")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x4A28910", Offset = "0x4A28910", VA = "0x4A28910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public bool Primitives
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x4A28920", Offset = "0x4A28920", VA = "0x4A28920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x4A28930", Offset = "0x4A28930", VA = "0x4A28930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public bool Object
	{
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x4A28940", Offset = "0x4A28940", VA = "0x4A28940")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x4A28950", Offset = "0x4A28950", VA = "0x4A28950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool NonSerializable
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x4A28960", Offset = "0x4A28960", VA = "0x4A28960")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x4A28970", Offset = "0x4A28970", VA = "0x4A28970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public bool Obsolete
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x4A28980", Offset = "0x4A28980", VA = "0x4A28980")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x4A28990", Offset = "0x4A28990", VA = "0x4A28990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public bool ExpectsBoolean
	{
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x4A289A0", Offset = "0x4A289A0", VA = "0x4A289A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000194")]
	public static TypeFilter Any
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x4A29ED0", Offset = "0x4A29ED0", VA = "0x4A29ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x4A285F0", Offset = "0x4A285F0", VA = "0x4A285F0")]
	public TypeFilter(TypesMatching matching, IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x4A28700", Offset = "0x4A28700", VA = "0x4A28700")]
	public TypeFilter(TypesMatching matching, params Type[] types)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x4A28710", Offset = "0x4A28710", VA = "0x4A28710")]
	public TypeFilter(IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x4A28720", Offset = "0x4A28720", VA = "0x4A28720")]
	public TypeFilter(params Type[] types)
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4A28A50", Offset = "0x4A28A50", VA = "0x4A28A50", Slot = "7")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4A28A60", Offset = "0x4A28A60", VA = "0x4A28A60")]
	public TypeFilter Clone()
	{
		return null;
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4A28B00", Offset = "0x4A28B00", VA = "0x4A28B00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4A28D30", Offset = "0x4A28D30", VA = "0x4A28D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4A29160", Offset = "0x4A29160", VA = "0x4A29160")]
	public bool ValidateType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x4A298E0", Offset = "0x4A298E0", VA = "0x4A298E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
