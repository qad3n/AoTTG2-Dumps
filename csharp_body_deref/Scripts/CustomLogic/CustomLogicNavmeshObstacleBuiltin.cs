using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace CustomLogic;

[Token(Token = "0x20002BD")]
[CompilerGenerated]
internal class CustomLogicNavmeshObstacleBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002BE")]
	public static class Factory
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x3CEE630", Offset = "0x3CEE630", VA = "0x3CEE630")]
		public static CustomLogicNavmeshObstacleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002BF")]
	public static class Bindings
	{
		[Token(Token = "0x4000E0D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x3CEE720", Offset = "0x3CEE720", VA = "0x3CEE720")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x3CEEBE0", Offset = "0x3CEEBE0", VA = "0x3CEEBE0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeBox()
		{
			return null;
		}

		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x3CEEC80", Offset = "0x3CEEC80", VA = "0x3CEEC80")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeCapsule()
		{
			return null;
		}

		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x3CEED20", Offset = "0x3CEED20", VA = "0x3CEED20")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Radius()
		{
			return null;
		}

		[Token(Token = "0x60012ED")]
		[Address(RVA = "0x3CEEE00", Offset = "0x3CEEE00", VA = "0x3CEEE00")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Height()
		{
			return null;
		}

		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x3CEEEE0", Offset = "0x3CEEEE0", VA = "0x3CEEEE0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x60012EF")]
		[Address(RVA = "0x3CEEFC0", Offset = "0x3CEEFC0", VA = "0x3CEEFC0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Center()
		{
			return null;
		}

		[Token(Token = "0x60012F0")]
		[Address(RVA = "0x3CEF0A0", Offset = "0x3CEF0A0", VA = "0x3CEF0A0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Carving()
		{
			return null;
		}

		[Token(Token = "0x60012F1")]
		[Address(RVA = "0x3CEF180", Offset = "0x3CEF180", VA = "0x3CEF180")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__CarveOnlyStationary()
		{
			return null;
		}

		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x3CEF260", Offset = "0x3CEF260", VA = "0x3CEF260")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Shape()
		{
			return null;
		}

		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x3CEF340", Offset = "0x3CEF340", VA = "0x3CEF340")]
		public static CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> __CreateMethodBinding__AutoScale()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x38")]
	public NavMeshObstacle Value;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x1700024A")]
	public static int ShapeBox
	{
		[Token(Token = "0x60012D3")]
		[Address(RVA = "0x3CEE120", Offset = "0x3CEE120", VA = "0x3CEE120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024B")]
	public static int ShapeCapsule
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x3CEE130", Offset = "0x3CEE130", VA = "0x3CEE130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024C")]
	public float Radius
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x3CEE140", Offset = "0x3CEE140", VA = "0x3CEE140")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x3CEE160", Offset = "0x3CEE160", VA = "0x3CEE160")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public float Height
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x3CEE180", Offset = "0x3CEE180", VA = "0x3CEE180")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x3CEE1A0", Offset = "0x3CEE1A0", VA = "0x3CEE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x3CEE1C0", Offset = "0x3CEE1C0", VA = "0x3CEE1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x3CEE240", Offset = "0x3CEE240", VA = "0x3CEE240")]
		set
		{
		}
	}

	[Token(Token = "0x1700024F")]
	public Vector3 Center
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x3CEE270", Offset = "0x3CEE270", VA = "0x3CEE270")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x3CEE290", Offset = "0x3CEE290", VA = "0x3CEE290")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public bool Carving
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x3CEE2B0", Offset = "0x3CEE2B0", VA = "0x3CEE2B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x3CEE2D0", Offset = "0x3CEE2D0", VA = "0x3CEE2D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000251")]
	public bool CarveOnlyStationary
	{
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x3CEE2F0", Offset = "0x3CEE2F0", VA = "0x3CEE2F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x3CEE310", Offset = "0x3CEE310", VA = "0x3CEE310")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public int Shape
	{
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x3CEE330", Offset = "0x3CEE330", VA = "0x3CEE330")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x3CEE350", Offset = "0x3CEE350", VA = "0x3CEE350")]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public override string ClassName
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x3CEE5D0", Offset = "0x3CEE5D0", VA = "0x3CEE5D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000254")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x3CEE600", Offset = "0x3CEE600", VA = "0x3CEE600", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	public override bool IsStatic
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x3CEE610", Offset = "0x3CEE610", VA = "0x3CEE610", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000256")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x3CEE620", Offset = "0x3CEE620", VA = "0x3CEE620", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x3CEE030", Offset = "0x3CEE030", VA = "0x3CEE030")]
	public CustomLogicNavmeshObstacleBuiltin()
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x3CEE040", Offset = "0x3CEE040", VA = "0x3CEE040")]
	public CustomLogicNavmeshObstacleBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x3CEE370", Offset = "0x3CEE370", VA = "0x3CEE370")]
	public void AutoScale()
	{
	}
}
