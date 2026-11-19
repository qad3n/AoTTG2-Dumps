// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNavmeshObstacleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace CustomLogic;

[Token(Token = "0x20004A1")]
[CompilerGenerated]
internal class CustomLogicNavmeshObstacleBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004A2")]
	public static class Factory
	{
		[Token(Token = "0x6001F96")]
		[Address(RVA = "0x59011E0", Offset = "0x59001E0", VA = "0x59011E0")]
		public static CustomLogicNavmeshObstacleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004A3")]
	public static class Bindings
	{
		[Token(Token = "0x40016B7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F97")]
		[Address(RVA = "0x59012D0", Offset = "0x59002D0", VA = "0x59012D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001F98")]
		[Address(RVA = "0x5901790", Offset = "0x5900790", VA = "0x5901790")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeBox()
		{
			return null;
		}

		[Token(Token = "0x6001F99")]
		[Address(RVA = "0x5901830", Offset = "0x5900830", VA = "0x5901830")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeCapsule()
		{
			return null;
		}

		[Token(Token = "0x6001F9A")]
		[Address(RVA = "0x59018D0", Offset = "0x59008D0", VA = "0x59018D0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Radius()
		{
			return null;
		}

		[Token(Token = "0x6001F9B")]
		[Address(RVA = "0x59019B0", Offset = "0x59009B0", VA = "0x59019B0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Height()
		{
			return null;
		}

		[Token(Token = "0x6001F9C")]
		[Address(RVA = "0x5901A90", Offset = "0x5900A90", VA = "0x5901A90")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x6001F9D")]
		[Address(RVA = "0x5901B70", Offset = "0x5900B70", VA = "0x5901B70")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Center()
		{
			return null;
		}

		[Token(Token = "0x6001F9E")]
		[Address(RVA = "0x5901C50", Offset = "0x5900C50", VA = "0x5901C50")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Carving()
		{
			return null;
		}

		[Token(Token = "0x6001F9F")]
		[Address(RVA = "0x5901D30", Offset = "0x5900D30", VA = "0x5901D30")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__CarveOnlyStationary()
		{
			return null;
		}

		[Token(Token = "0x6001FA0")]
		[Address(RVA = "0x5901E10", Offset = "0x5900E10", VA = "0x5901E10")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Shape()
		{
			return null;
		}

		[Token(Token = "0x6001FA1")]
		[Address(RVA = "0x5901EF0", Offset = "0x5900EF0", VA = "0x5901EF0")]
		public static CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> __CreateMethodBinding__AutoScale()
		{
			return null;
		}
	}

	[Token(Token = "0x40016B4")]
	[FieldOffset(Offset = "0x38")]
	public NavMeshObstacle Value;

	[Token(Token = "0x40016B5")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016B6")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x1700039A")]
	public static int ShapeBox
	{
		[Token(Token = "0x6001F80")]
		[Address(RVA = "0x5900470", Offset = "0x58FF470", VA = "0x5900470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700039B")]
	public static int ShapeCapsule
	{
		[Token(Token = "0x6001F81")]
		[Address(RVA = "0x5900480", Offset = "0x58FF480", VA = "0x5900480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700039C")]
	public float Radius
	{
		[Token(Token = "0x6001F82")]
		[Address(RVA = "0x5900490", Offset = "0x58FF490", VA = "0x5900490")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F83")]
		[Address(RVA = "0x59004B0", Offset = "0x58FF4B0", VA = "0x59004B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700039D")]
	public float Height
	{
		[Token(Token = "0x6001F84")]
		[Address(RVA = "0x59004D0", Offset = "0x58FF4D0", VA = "0x59004D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F85")]
		[Address(RVA = "0x59004F0", Offset = "0x58FF4F0", VA = "0x59004F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700039E")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x6001F86")]
		[Address(RVA = "0x5900510", Offset = "0x58FF510", VA = "0x5900510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F87")]
		[Address(RVA = "0x5900590", Offset = "0x58FF590", VA = "0x5900590")]
		set
		{
		}
	}

	[Token(Token = "0x1700039F")]
	public Vector3 Center
	{
		[Token(Token = "0x6001F88")]
		[Address(RVA = "0x59005C0", Offset = "0x58FF5C0", VA = "0x59005C0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001F89")]
		[Address(RVA = "0x59005E0", Offset = "0x58FF5E0", VA = "0x59005E0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A0")]
	public bool Carving
	{
		[Token(Token = "0x6001F8A")]
		[Address(RVA = "0x5900600", Offset = "0x58FF600", VA = "0x5900600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001F8B")]
		[Address(RVA = "0x5900620", Offset = "0x58FF620", VA = "0x5900620")]
		set
		{
		}
	}

	[Token(Token = "0x170003A1")]
	public bool CarveOnlyStationary
	{
		[Token(Token = "0x6001F8C")]
		[Address(RVA = "0x5900640", Offset = "0x58FF640", VA = "0x5900640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001F8D")]
		[Address(RVA = "0x5900660", Offset = "0x58FF660", VA = "0x5900660")]
		set
		{
		}
	}

	[Token(Token = "0x170003A2")]
	public int Shape
	{
		[Token(Token = "0x6001F8E")]
		[Address(RVA = "0x5900680", Offset = "0x58FF680", VA = "0x5900680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001F8F")]
		[Address(RVA = "0x59006A0", Offset = "0x58FF6A0", VA = "0x59006A0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A3")]
	public override string ClassName
	{
		[Token(Token = "0x6001F92")]
		[Address(RVA = "0x5901180", Offset = "0x5900180", VA = "0x5901180", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F93")]
		[Address(RVA = "0x59011B0", Offset = "0x59001B0", VA = "0x59011B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A5")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F94")]
		[Address(RVA = "0x59011C0", Offset = "0x59001C0", VA = "0x59011C0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F95")]
		[Address(RVA = "0x59011D0", Offset = "0x59001D0", VA = "0x59011D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x5900380", Offset = "0x58FF380", VA = "0x5900380")]
	public CustomLogicNavmeshObstacleBuiltin()
	{
	}

	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x5900390", Offset = "0x58FF390", VA = "0x5900390")]
	public CustomLogicNavmeshObstacleBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x59006C0", Offset = "0x58FF6C0", VA = "0x59006C0")]
	public void AutoScale()
	{
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x5900D40", Offset = "0x58FFD40", VA = "0x5900D40")]
	private static bool TryGetColliderBounds(Collider collider, out Bounds bounds)
	{
		return default(bool);
	}
}
