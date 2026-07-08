using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002A8")]
[CompilerGenerated]
internal class CustomLogicColliderBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x20002A9")]
	public static class Factory
	{
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x3CE1310", Offset = "0x3CE1310", VA = "0x3CE1310")]
		public static CustomLogicColliderBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002AA")]
	public static class Bindings
	{
		[Token(Token = "0x4000DE7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001197")]
		[Address(RVA = "0x3CE13A0", Offset = "0x3CE13A0", VA = "0x3CE13A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001198")]
		[Address(RVA = "0x3CE1AA0", Offset = "0x3CE1AA0", VA = "0x3CE1AA0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__AttachedArticulationBody()
		{
			return null;
		}

		[Token(Token = "0x6001199")]
		[Address(RVA = "0x3CE1B40", Offset = "0x3CE1B40", VA = "0x3CE1B40")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ContactOffset()
		{
			return null;
		}

		[Token(Token = "0x600119A")]
		[Address(RVA = "0x3CE1C20", Offset = "0x3CE1C20", VA = "0x3CE1C20")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Enabled()
		{
			return null;
		}

		[Token(Token = "0x600119B")]
		[Address(RVA = "0x3CE1D00", Offset = "0x3CE1D00", VA = "0x3CE1D00")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ExcludeLayers()
		{
			return null;
		}

		[Token(Token = "0x600119C")]
		[Address(RVA = "0x3CE1DE0", Offset = "0x3CE1DE0", VA = "0x3CE1DE0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__IncludeLayers()
		{
			return null;
		}

		[Token(Token = "0x600119D")]
		[Address(RVA = "0x3CE1EC0", Offset = "0x3CE1EC0", VA = "0x3CE1EC0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__IsTrigger()
		{
			return null;
		}

		[Token(Token = "0x600119E")]
		[Address(RVA = "0x3CE1FA0", Offset = "0x3CE1FA0", VA = "0x3CE1FA0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Center()
		{
			return null;
		}

		[Token(Token = "0x600119F")]
		[Address(RVA = "0x3CE2040", Offset = "0x3CE2040", VA = "0x3CE2040")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ProvidesContacts()
		{
			return null;
		}

		[Token(Token = "0x60011A0")]
		[Address(RVA = "0x3CE2120", Offset = "0x3CE2120", VA = "0x3CE2120")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__MaterialName()
		{
			return null;
		}

		[Token(Token = "0x60011A1")]
		[Address(RVA = "0x3CE21C0", Offset = "0x3CE21C0", VA = "0x3CE21C0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__SharedMaterialName()
		{
			return null;
		}

		[Token(Token = "0x60011A2")]
		[Address(RVA = "0x3CE2260", Offset = "0x3CE2260", VA = "0x3CE2260")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Transform()
		{
			return null;
		}

		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x3CE2300", Offset = "0x3CE2300", VA = "0x3CE2300")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__GameObjectTransform()
		{
			return null;
		}

		[Token(Token = "0x60011A4")]
		[Address(RVA = "0x3CE23A0", Offset = "0x3CE23A0", VA = "0x3CE23A0")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__ClosestPoint()
		{
			return null;
		}

		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x3CE24F0", Offset = "0x3CE24F0", VA = "0x3CE24F0")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__ClosestPointOnBounds()
		{
			return null;
		}

		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x3CE2640", Offset = "0x3CE2640", VA = "0x3CE2640")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__Raycast()
		{
			return null;
		}

		[Token(Token = "0x60011A7")]
		[Address(RVA = "0x3CE2790", Offset = "0x3CE2790", VA = "0x3CE2790")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x60011A8")]
		[Address(RVA = "0x3CE28E0", Offset = "0x3CE28E0", VA = "0x3CE28E0")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x3CE2A30", Offset = "0x3CE2A30", VA = "0x3CE2A30")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DE6")]
	[FieldOffset(Offset = "0x30")]
	public Collider collider;

	[Token(Token = "0x170001FA")]
	public CustomLogicTransformBuiltin AttachedArticulationBody
	{
		[Token(Token = "0x6001179")]
		[Address(RVA = "0x3CE0790", Offset = "0x3CE0790", VA = "0x3CE0790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FB")]
	public float ContactOffset
	{
		[Token(Token = "0x600117A")]
		[Address(RVA = "0x3CE0810", Offset = "0x3CE0810", VA = "0x3CE0810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600117B")]
		[Address(RVA = "0x3CE0830", Offset = "0x3CE0830", VA = "0x3CE0830")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public new bool Enabled
	{
		[Token(Token = "0x600117C")]
		[Address(RVA = "0x3CE0850", Offset = "0x3CE0850", VA = "0x3CE0850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x3CE0870", Offset = "0x3CE0870", VA = "0x3CE0870")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public int ExcludeLayers
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x3CE0890", Offset = "0x3CE0890", VA = "0x3CE0890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600117F")]
		[Address(RVA = "0x3CE08B0", Offset = "0x3CE08B0", VA = "0x3CE08B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FE")]
	public int IncludeLayers
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x3CE08E0", Offset = "0x3CE08E0", VA = "0x3CE08E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x3CE0900", Offset = "0x3CE0900", VA = "0x3CE0900")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public bool IsTrigger
	{
		[Token(Token = "0x6001182")]
		[Address(RVA = "0x3CE0930", Offset = "0x3CE0930", VA = "0x3CE0930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001183")]
		[Address(RVA = "0x3CE0950", Offset = "0x3CE0950", VA = "0x3CE0950")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public CustomLogicVector3Builtin Center
	{
		[Token(Token = "0x6001184")]
		[Address(RVA = "0x3CE0970", Offset = "0x3CE0970", VA = "0x3CE0970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000201")]
	public bool ProvidesContacts
	{
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x3CE0A00", Offset = "0x3CE0A00", VA = "0x3CE0A00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x3CE0A20", Offset = "0x3CE0A20", VA = "0x3CE0A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000202")]
	public string MaterialName
	{
		[Token(Token = "0x6001187")]
		[Address(RVA = "0x3CE0A40", Offset = "0x3CE0A40", VA = "0x3CE0A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000203")]
	public string SharedMaterialName
	{
		[Token(Token = "0x6001188")]
		[Address(RVA = "0x3CE0A70", Offset = "0x3CE0A70", VA = "0x3CE0A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x6001189")]
		[Address(RVA = "0x3CE0AA0", Offset = "0x3CE0AA0", VA = "0x3CE0AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public CustomLogicTransformBuiltin GameObjectTransform
	{
		[Token(Token = "0x600118A")]
		[Address(RVA = "0x3CE0B10", Offset = "0x3CE0B10", VA = "0x3CE0B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public override string ClassName
	{
		[Token(Token = "0x6001192")]
		[Address(RVA = "0x3CE12B0", Offset = "0x3CE12B0", VA = "0x3CE12B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x3CE12E0", Offset = "0x3CE12E0", VA = "0x3CE12E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x3CE12F0", Offset = "0x3CE12F0", VA = "0x3CE12F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x3CE1300", Offset = "0x3CE1300", VA = "0x3CE1300", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x3CE0640", Offset = "0x3CE0640", VA = "0x3CE0640")]
	public CustomLogicColliderBuiltin()
	{
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x3CE06B0", Offset = "0x3CE06B0", VA = "0x3CE06B0")]
	public CustomLogicColliderBuiltin(object[] parameters)
	{
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x3CE0B90", Offset = "0x3CE0B90", VA = "0x3CE0B90")]
	public CustomLogicVector3Builtin ClosestPoint(CustomLogicVector3Builtin position)
	{
		return null;
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x3CE0BC0", Offset = "0x3CE0BC0", VA = "0x3CE0BC0")]
	public CustomLogicVector3Builtin ClosestPointOnBounds(CustomLogicVector3Builtin position)
	{
		return null;
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x3CE0BF0", Offset = "0x3CE0BF0", VA = "0x3CE0BF0")]
	public CustomLogicLineCastHitResultBuiltin Raycast(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, string collideWith)
	{
		return null;
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x3CE0FB0", Offset = "0x3CE0FB0", VA = "0x3CE0FB0")]
	public BuiltinClassInstance Copy()
	{
		return null;
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x3CE1080", Offset = "0x3CE1080", VA = "0x3CE1080", Slot = "9")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x3CE1150", Offset = "0x3CE1150", VA = "0x3CE1150", Slot = "10")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x3CE1220", Offset = "0x3CE1220", VA = "0x3CE1220", Slot = "11")]
	public int __Hash__()
	{
		return default(int);
	}
}
