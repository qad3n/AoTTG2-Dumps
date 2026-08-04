// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4D4D300", Offset = "0x4D4D300", VA = "0x4D4D300")]
		[CompilerGenerated]
		get
		{
			return default(TypesMatching);
		}
		[Token(Token = "0x6000EAA")]
		[Address(RVA = "0x4D4D310", Offset = "0x4D4D310", VA = "0x4D4D310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	public HashSet<Type> Types
	{
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x4D4D320", Offset = "0x4D4D320", VA = "0x4D4D320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	public bool Value
	{
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x4D4D330", Offset = "0x4D4D330", VA = "0x4D4D330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x4D4D340", Offset = "0x4D4D340", VA = "0x4D4D340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000182")]
	public bool Reference
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x4D4D350", Offset = "0x4D4D350", VA = "0x4D4D350")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x4D4D360", Offset = "0x4D4D360", VA = "0x4D4D360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public bool Classes
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x4D4D370", Offset = "0x4D4D370", VA = "0x4D4D370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB1")]
		[Address(RVA = "0x4D4D380", Offset = "0x4D4D380", VA = "0x4D4D380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public bool Interfaces
	{
		[Token(Token = "0x6000EB2")]
		[Address(RVA = "0x4D4D390", Offset = "0x4D4D390", VA = "0x4D4D390")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x4D4D3A0", Offset = "0x4D4D3A0", VA = "0x4D4D3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000185")]
	public bool Structs
	{
		[Token(Token = "0x6000EB4")]
		[Address(RVA = "0x4D4D3B0", Offset = "0x4D4D3B0", VA = "0x4D4D3B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x4D4D3C0", Offset = "0x4D4D3C0", VA = "0x4D4D3C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public bool Enums
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x4D4D3D0", Offset = "0x4D4D3D0", VA = "0x4D4D3D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x4D4D3E0", Offset = "0x4D4D3E0", VA = "0x4D4D3E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public bool Public
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x4D4D3F0", Offset = "0x4D4D3F0", VA = "0x4D4D3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x4D4D400", Offset = "0x4D4D400", VA = "0x4D4D400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public bool NonPublic
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x4D4D410", Offset = "0x4D4D410", VA = "0x4D4D410")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x4D4D420", Offset = "0x4D4D420", VA = "0x4D4D420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public bool Abstract
	{
		[Token(Token = "0x6000EBC")]
		[Address(RVA = "0x4D4D430", Offset = "0x4D4D430", VA = "0x4D4D430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x4D4D440", Offset = "0x4D4D440", VA = "0x4D4D440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public bool Generic
	{
		[Token(Token = "0x6000EBE")]
		[Address(RVA = "0x4D4D450", Offset = "0x4D4D450", VA = "0x4D4D450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x4D4D460", Offset = "0x4D4D460", VA = "0x4D4D460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public bool OpenConstructedGeneric
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x4D4D470", Offset = "0x4D4D470", VA = "0x4D4D470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x4D4D480", Offset = "0x4D4D480", VA = "0x4D4D480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public bool Static
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x4D4D490", Offset = "0x4D4D490", VA = "0x4D4D490")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x4D4D4A0", Offset = "0x4D4D4A0", VA = "0x4D4D4A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public bool Sealed
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x4D4D4B0", Offset = "0x4D4D4B0", VA = "0x4D4D4B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x4D4D4C0", Offset = "0x4D4D4C0", VA = "0x4D4D4C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public bool Nested
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x4D4D4D0", Offset = "0x4D4D4D0", VA = "0x4D4D4D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x4D4D4E0", Offset = "0x4D4D4E0", VA = "0x4D4D4E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public bool Primitives
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x4D4D4F0", Offset = "0x4D4D4F0", VA = "0x4D4D4F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x4D4D500", Offset = "0x4D4D500", VA = "0x4D4D500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public bool Object
	{
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x4D4D510", Offset = "0x4D4D510", VA = "0x4D4D510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x4D4D520", Offset = "0x4D4D520", VA = "0x4D4D520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool NonSerializable
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x4D4D530", Offset = "0x4D4D530", VA = "0x4D4D530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x4D4D540", Offset = "0x4D4D540", VA = "0x4D4D540")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public bool Obsolete
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x4D4D550", Offset = "0x4D4D550", VA = "0x4D4D550")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x4D4D560", Offset = "0x4D4D560", VA = "0x4D4D560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public bool ExpectsBoolean
	{
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x4D4D570", Offset = "0x4D4D570", VA = "0x4D4D570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000194")]
	public static TypeFilter Any
	{
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x4D4EAA0", Offset = "0x4D4EAA0", VA = "0x4D4EAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x4D4D1C0", Offset = "0x4D4D1C0", VA = "0x4D4D1C0")]
	public TypeFilter(TypesMatching matching, IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x4D4D2D0", Offset = "0x4D4D2D0", VA = "0x4D4D2D0")]
	public TypeFilter(TypesMatching matching, params Type[] types)
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x4D4D2E0", Offset = "0x4D4D2E0", VA = "0x4D4D2E0")]
	public TypeFilter(IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x4D4D2F0", Offset = "0x4D4D2F0", VA = "0x4D4D2F0")]
	public TypeFilter(params Type[] types)
	{
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x4D4D620", Offset = "0x4D4D620", VA = "0x4D4D620", Slot = "7")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x4D4D630", Offset = "0x4D4D630", VA = "0x4D4D630")]
	public TypeFilter Clone()
	{
		return null;
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x4D4D6D0", Offset = "0x4D4D6D0", VA = "0x4D4D6D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x4D4D900", Offset = "0x4D4D900", VA = "0x4D4D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x4D4DD30", Offset = "0x4D4DD30", VA = "0x4D4DD30")]
	public bool ValidateType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x4D4E4B0", Offset = "0x4D4E4B0", VA = "0x4D4E4B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
