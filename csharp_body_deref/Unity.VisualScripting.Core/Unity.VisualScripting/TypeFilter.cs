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
	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x10")]
	private readonly HashSet<Type> types;

	[Token(Token = "0x17000182")]
	public TypesMatching Matching
	{
		[Token(Token = "0x6000EB3")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(TypesMatching);
		}
		[Token(Token = "0x6000EB4")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public HashSet<Type> Types
	{
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public bool Value
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x12B3EA0", Offset = "0x12B24A0", VA = "0x1812B3EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000185")]
	public bool Reference
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x12B36C0", Offset = "0x12B1CC0", VA = "0x1812B36C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x1D25E10", Offset = "0x1D24410", VA = "0x181D25E10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public bool Classes
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x2B431A0", Offset = "0x2B417A0", VA = "0x182B431A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x2B431D0", Offset = "0x2B417D0", VA = "0x182B431D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public bool Interfaces
	{
		[Token(Token = "0x6000EBC")]
		[Address(RVA = "0x2B431B0", Offset = "0x2B417B0", VA = "0x182B431B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x2B431E0", Offset = "0x2B417E0", VA = "0x182B431E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public bool Structs
	{
		[Token(Token = "0x6000EBE")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public bool Enums
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x1991920", Offset = "0x198FF20", VA = "0x181991920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public bool Public
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x277E510", Offset = "0x277CB10", VA = "0x18277E510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x2B71660", Offset = "0x2B6FC60", VA = "0x182B71660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public bool NonPublic
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x2B71670", Offset = "0x2B6FC70", VA = "0x182B71670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x2B71680", Offset = "0x2B6FC80", VA = "0x182B71680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public bool Abstract
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public bool Generic
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x1C3C7E0", Offset = "0x1C3ADE0", VA = "0x181C3C7E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x1C3C860", Offset = "0x1C3AE60", VA = "0x181C3C860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public bool OpenConstructedGeneric
	{
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x1C3C7D0", Offset = "0x1C3ADD0", VA = "0x181C3C7D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x1C3C850", Offset = "0x1C3AE50", VA = "0x181C3C850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public bool Static
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x1C3C7C0", Offset = "0x1C3ADC0", VA = "0x181C3C7C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x1C3C840", Offset = "0x1C3AE40", VA = "0x181C3C840")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public bool Sealed
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool Nested
	{
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public bool Primitives
	{
		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED3")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public bool Object
	{
		[Token(Token = "0x6000ED4")]
		[Address(RVA = "0x20FB1B0", Offset = "0x20F97B0", VA = "0x1820FB1B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED5")]
		[Address(RVA = "0x20FB210", Offset = "0x20F9810", VA = "0x1820FB210")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool NonSerializable
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x584B60", Offset = "0x583160", VA = "0x180584B60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public bool Obsolete
	{
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x2809E90", Offset = "0x2808490", VA = "0x182809E90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x2809EA0", Offset = "0x28084A0", VA = "0x182809EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public bool ExpectsBoolean
	{
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x2E449D0", Offset = "0x2E42FD0", VA = "0x182E449D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000197")]
	public static TypeFilter Any
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x2E44900", Offset = "0x2E42F00", VA = "0x182E44900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x2E447D0", Offset = "0x2E42DD0", VA = "0x182E447D0")]
	public TypeFilter(TypesMatching matching, IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x2E448F0", Offset = "0x2E42EF0", VA = "0x182E448F0")]
	public TypeFilter(TypesMatching matching, params Type[] types)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x2E447C0", Offset = "0x2E42DC0", VA = "0x182E447C0")]
	public TypeFilter(IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x2E447C0", Offset = "0x2E42DC0", VA = "0x182E447C0")]
	public TypeFilter(params Type[] types)
	{
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x2E434B0", Offset = "0x2E41AB0", VA = "0x182E434B0", Slot = "7")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x2E434B0", Offset = "0x2E41AB0", VA = "0x182E434B0")]
	public TypeFilter Clone()
	{
		return null;
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x2E435C0", Offset = "0x2E41BC0", VA = "0x182E435C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x2E43730", Offset = "0x2E41D30", VA = "0x182E43730", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x2E44120", Offset = "0x2E42720", VA = "0x182E44120")]
	public bool ValidateType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x2E43B30", Offset = "0x2E42130", VA = "0x182E43B30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
