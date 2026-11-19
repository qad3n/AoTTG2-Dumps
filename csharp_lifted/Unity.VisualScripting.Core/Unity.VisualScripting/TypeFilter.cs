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
		[Address(RVA = "0x6838990", Offset = "0x6837990", VA = "0x6838990")]
		[CompilerGenerated]
		get
		{
			return default(TypesMatching);
		}
		[Token(Token = "0x6000EB4")]
		[Address(RVA = "0x68389A0", Offset = "0x68379A0", VA = "0x68389A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public HashSet<Type> Types
	{
		[Token(Token = "0x6000EB5")]
		[Address(RVA = "0x68389B0", Offset = "0x68379B0", VA = "0x68389B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public bool Value
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x68389C0", Offset = "0x68379C0", VA = "0x68389C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x68389D0", Offset = "0x68379D0", VA = "0x68389D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000185")]
	public bool Reference
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x68389E0", Offset = "0x68379E0", VA = "0x68389E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x68389F0", Offset = "0x68379F0", VA = "0x68389F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public bool Classes
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x6838A00", Offset = "0x6837A00", VA = "0x6838A00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x6838A10", Offset = "0x6837A10", VA = "0x6838A10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000187")]
	public bool Interfaces
	{
		[Token(Token = "0x6000EBC")]
		[Address(RVA = "0x6838A20", Offset = "0x6837A20", VA = "0x6838A20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBD")]
		[Address(RVA = "0x6838A30", Offset = "0x6837A30", VA = "0x6838A30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public bool Structs
	{
		[Token(Token = "0x6000EBE")]
		[Address(RVA = "0x6838A40", Offset = "0x6837A40", VA = "0x6838A40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EBF")]
		[Address(RVA = "0x6838A50", Offset = "0x6837A50", VA = "0x6838A50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public bool Enums
	{
		[Token(Token = "0x6000EC0")]
		[Address(RVA = "0x6838A60", Offset = "0x6837A60", VA = "0x6838A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC1")]
		[Address(RVA = "0x6838A70", Offset = "0x6837A70", VA = "0x6838A70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public bool Public
	{
		[Token(Token = "0x6000EC2")]
		[Address(RVA = "0x6838A80", Offset = "0x6837A80", VA = "0x6838A80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x6838A90", Offset = "0x6837A90", VA = "0x6838A90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public bool NonPublic
	{
		[Token(Token = "0x6000EC4")]
		[Address(RVA = "0x6838AA0", Offset = "0x6837AA0", VA = "0x6838AA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC5")]
		[Address(RVA = "0x6838AB0", Offset = "0x6837AB0", VA = "0x6838AB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public bool Abstract
	{
		[Token(Token = "0x6000EC6")]
		[Address(RVA = "0x6838AC0", Offset = "0x6837AC0", VA = "0x6838AC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC7")]
		[Address(RVA = "0x6838AD0", Offset = "0x6837AD0", VA = "0x6838AD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public bool Generic
	{
		[Token(Token = "0x6000EC8")]
		[Address(RVA = "0x6838AE0", Offset = "0x6837AE0", VA = "0x6838AE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0x6838AF0", Offset = "0x6837AF0", VA = "0x6838AF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public bool OpenConstructedGeneric
	{
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x6838B00", Offset = "0x6837B00", VA = "0x6838B00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x6838B10", Offset = "0x6837B10", VA = "0x6838B10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public bool Static
	{
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x6838B20", Offset = "0x6837B20", VA = "0x6838B20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x6838B30", Offset = "0x6837B30", VA = "0x6838B30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public bool Sealed
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x6838B40", Offset = "0x6837B40", VA = "0x6838B40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x6838B50", Offset = "0x6837B50", VA = "0x6838B50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool Nested
	{
		[Token(Token = "0x6000ED0")]
		[Address(RVA = "0x6838B60", Offset = "0x6837B60", VA = "0x6838B60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED1")]
		[Address(RVA = "0x6838B70", Offset = "0x6837B70", VA = "0x6838B70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000192")]
	public bool Primitives
	{
		[Token(Token = "0x6000ED2")]
		[Address(RVA = "0x6838B80", Offset = "0x6837B80", VA = "0x6838B80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED3")]
		[Address(RVA = "0x6838B90", Offset = "0x6837B90", VA = "0x6838B90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public bool Object
	{
		[Token(Token = "0x6000ED4")]
		[Address(RVA = "0x6838BA0", Offset = "0x6837BA0", VA = "0x6838BA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED5")]
		[Address(RVA = "0x6838BB0", Offset = "0x6837BB0", VA = "0x6838BB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool NonSerializable
	{
		[Token(Token = "0x6000ED6")]
		[Address(RVA = "0x6838BC0", Offset = "0x6837BC0", VA = "0x6838BC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED7")]
		[Address(RVA = "0x6838BD0", Offset = "0x6837BD0", VA = "0x6838BD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public bool Obsolete
	{
		[Token(Token = "0x6000ED8")]
		[Address(RVA = "0x6838BE0", Offset = "0x6837BE0", VA = "0x6838BE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ED9")]
		[Address(RVA = "0x6838BF0", Offset = "0x6837BF0", VA = "0x6838BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public bool ExpectsBoolean
	{
		[Token(Token = "0x6000EDA")]
		[Address(RVA = "0x6838C00", Offset = "0x6837C00", VA = "0x6838C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000197")]
	public static TypeFilter Any
	{
		[Token(Token = "0x6000EE1")]
		[Address(RVA = "0x683A0A0", Offset = "0x68390A0", VA = "0x683A0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x6838850", Offset = "0x6837850", VA = "0x6838850")]
	public TypeFilter(TypesMatching matching, IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x6838960", Offset = "0x6837960", VA = "0x6838960")]
	public TypeFilter(TypesMatching matching, params Type[] types)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x6838970", Offset = "0x6837970", VA = "0x6838970")]
	public TypeFilter(IEnumerable<Type> types)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x6838980", Offset = "0x6837980", VA = "0x6838980")]
	public TypeFilter(params Type[] types)
	{
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x6838CB0", Offset = "0x6837CB0", VA = "0x6838CB0", Slot = "7")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x6838CC0", Offset = "0x6837CC0", VA = "0x6838CC0")]
	public TypeFilter Clone()
	{
		return null;
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x6838D60", Offset = "0x6837D60", VA = "0x6838D60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x6838F80", Offset = "0x6837F80", VA = "0x6838F80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x6839390", Offset = "0x6838390", VA = "0x6839390")]
	public bool ValidateType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x6839AA0", Offset = "0x6838AA0", VA = "0x6839AA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
