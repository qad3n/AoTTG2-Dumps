// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000442")]
[CompilerGenerated]
internal class CustomLogicNavmeshObstacleBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000443")]
	public static class Factory
	{
		[Token(Token = "0x6001D1F")]
		[Address(RVA = "0x1F077B0", Offset = "0x1F05DB0", VA = "0x181F077B0")]
		public static CustomLogicNavmeshObstacleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000444")]
	public static class Bindings
	{
		[Token(Token = "0x4001517")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001D20")]
		[Address(RVA = "0x1EEB210", Offset = "0x1EE9810", VA = "0x181EEB210")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001D21")]
		[Address(RVA = "0x1EFDE10", Offset = "0x1EFC410", VA = "0x181EFDE10")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeBox()
		{
			return null;
		}

		[Token(Token = "0x6001D22")]
		[Address(RVA = "0x1EFDEB0", Offset = "0x1EFC4B0", VA = "0x181EFDEB0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__ShapeCapsule()
		{
			return null;
		}

		[Token(Token = "0x6001D23")]
		[Address(RVA = "0x1EFD460", Offset = "0x1EFBA60", VA = "0x181EFD460")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Radius()
		{
			return null;
		}

		[Token(Token = "0x6001D24")]
		[Address(RVA = "0x1EFC150", Offset = "0x1EFA750", VA = "0x181EFC150")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Height()
		{
			return null;
		}

		[Token(Token = "0x6001D25")]
		[Address(RVA = "0x1EFD870", Offset = "0x1EFBE70", VA = "0x181EFD870")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x6001D26")]
		[Address(RVA = "0x1EFAE90", Offset = "0x1EF9490", VA = "0x181EFAE90")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Center()
		{
			return null;
		}

		[Token(Token = "0x6001D27")]
		[Address(RVA = "0x1EFADA0", Offset = "0x1EF93A0", VA = "0x181EFADA0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Carving()
		{
			return null;
		}

		[Token(Token = "0x6001D28")]
		[Address(RVA = "0x1EFACB0", Offset = "0x1EF92B0", VA = "0x181EFACB0")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__CarveOnlyStationary()
		{
			return null;
		}

		[Token(Token = "0x6001D29")]
		[Address(RVA = "0x1EFDF50", Offset = "0x1EFC550", VA = "0x181EFDF50")]
		public static CLPropertyBinding<CustomLogicNavmeshObstacleBuiltin> __CreatePropertyBinding__Shape()
		{
			return null;
		}

		[Token(Token = "0x6001D2A")]
		[Address(RVA = "0x1EF44C0", Offset = "0x1EF2AC0", VA = "0x181EF44C0")]
		public static CLMethodBinding<CustomLogicNavmeshObstacleBuiltin> __CreateMethodBinding__AutoScale()
		{
			return null;
		}
	}

	[Token(Token = "0x4001514")]
	[FieldOffset(Offset = "0x38")]
	public NavMeshObstacle Value;

	[Token(Token = "0x4001515")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4001516")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x17000359")]
	public static int ShapeBox
	{
		[Token(Token = "0x6001D09")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700035A")]
	public static int ShapeCapsule
	{
		[Token(Token = "0x6001D0A")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700035B")]
	public float Radius
	{
		[Token(Token = "0x6001D0B")]
		[Address(RVA = "0x1F071F0", Offset = "0x1F057F0", VA = "0x181F071F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001D0C")]
		[Address(RVA = "0x1F07360", Offset = "0x1F05960", VA = "0x181F07360")]
		set
		{
		}
	}

	[Token(Token = "0x1700035C")]
	public float Height
	{
		[Token(Token = "0x6001D0D")]
		[Address(RVA = "0x1F071D0", Offset = "0x1F057D0", VA = "0x181F071D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001D0E")]
		[Address(RVA = "0x1F07340", Offset = "0x1F05940", VA = "0x181F07340")]
		set
		{
		}
	}

	[Token(Token = "0x1700035D")]
	public CustomLogicVector3Builtin Scale
	{
		[Token(Token = "0x6001D0F")]
		[Address(RVA = "0x1F07210", Offset = "0x1F05810", VA = "0x181F07210")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D10")]
		[Address(RVA = "0x1F07380", Offset = "0x1F05980", VA = "0x181F07380")]
		set
		{
		}
	}

	[Token(Token = "0x1700035E")]
	public Vector3 Center
	{
		[Token(Token = "0x6001D11")]
		[Address(RVA = "0x1F07160", Offset = "0x1F05760", VA = "0x181F07160")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001D12")]
		[Address(RVA = "0x1F07300", Offset = "0x1F05900", VA = "0x181F07300")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	public bool Carving
	{
		[Token(Token = "0x6001D13")]
		[Address(RVA = "0x1F07140", Offset = "0x1F05740", VA = "0x181F07140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D14")]
		[Address(RVA = "0x1F072E0", Offset = "0x1F058E0", VA = "0x181F072E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public bool CarveOnlyStationary
	{
		[Token(Token = "0x6001D15")]
		[Address(RVA = "0x1F07120", Offset = "0x1F05720", VA = "0x181F07120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D16")]
		[Address(RVA = "0x1F072C0", Offset = "0x1F058C0", VA = "0x181F072C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	public int Shape
	{
		[Token(Token = "0x6001D17")]
		[Address(RVA = "0x1F072A0", Offset = "0x1F058A0", VA = "0x181F072A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001D18")]
		[Address(RVA = "0x1F073C0", Offset = "0x1F059C0", VA = "0x181F073C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000362")]
	public override string ClassName
	{
		[Token(Token = "0x6001D1B")]
		[Address(RVA = "0x1F071A0", Offset = "0x1F057A0", VA = "0x181F071A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000363")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001D1C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000364")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001D1D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000365")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001D1E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001D07")]
	[Address(RVA = "0x1F01510", Offset = "0x1EFFB10", VA = "0x181F01510")]
	public CustomLogicNavmeshObstacleBuiltin()
	{
	}

	[Token(Token = "0x6001D08")]
	[Address(RVA = "0x1F07020", Offset = "0x1F05620", VA = "0x181F07020")]
	public CustomLogicNavmeshObstacleBuiltin(CustomLogicMapObjectBuiltin owner)
	{
	}

	[Token(Token = "0x6001D19")]
	[Address(RVA = "0x1F06780", Offset = "0x1F04D80", VA = "0x181F06780")]
	public void AutoScale()
	{
	}

	[Token(Token = "0x6001D1A")]
	[Address(RVA = "0x1F06B40", Offset = "0x1F05140", VA = "0x181F06B40")]
	private static bool TryGetColliderBounds(Collider collider, out Bounds bounds)
	{
		return default(bool);
	}
}
