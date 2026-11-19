// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HorseController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HorseController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x200067F")]
internal class HorseController
{
	[Token(Token = "0x4001D17")]
	[FieldOffset(Offset = "0x3C")]
	private float _recallTime;

	[Token(Token = "0x17000AE8")]
	public HorseOrder Order
	{
		[Token(Token = "0x6003E99")]
		[Address(RVA = "0x5AA69E0", Offset = "0x5AA59E0", VA = "0x5AA69E0")]
		[CompilerGenerated]
		get
		{
			return default(HorseOrder);
		}
		[Token(Token = "0x6003E9A")]
		[Address(RVA = "0x5AA69F0", Offset = "0x5AA59F0", VA = "0x5AA69F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AE9")]
	public int TargetViewId
	{
		[Token(Token = "0x6003E9B")]
		[Address(RVA = "0x5AA6A00", Offset = "0x5AA5A00", VA = "0x5AA6A00")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003E9C")]
		[Address(RVA = "0x5AA6A10", Offset = "0x5AA5A10", VA = "0x5AA6A10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AEA")]
	public Vector3 Destination
	{
		[Token(Token = "0x6003E9D")]
		[Address(RVA = "0x5AA6A20", Offset = "0x5AA5A20", VA = "0x5AA6A20")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003E9E")]
		[Address(RVA = "0x5AA6A30", Offset = "0x5AA5A30", VA = "0x5AA6A30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AEB")]
	public float StoppingDistance
	{
		[Token(Token = "0x6003E9F")]
		[Address(RVA = "0x5AA6A40", Offset = "0x5AA5A40", VA = "0x5AA6A40")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003EA0")]
		[Address(RVA = "0x5AA6A50", Offset = "0x5AA5A50", VA = "0x5AA6A50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AEC")]
	public Vector3 Direction
	{
		[Token(Token = "0x6003EA1")]
		[Address(RVA = "0x5AA6A60", Offset = "0x5AA5A60", VA = "0x5AA6A60")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003EA2")]
		[Address(RVA = "0x5AA6A70", Offset = "0x5AA5A70", VA = "0x5AA6A70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AED")]
	public bool Moving
	{
		[Token(Token = "0x6003EA3")]
		[Address(RVA = "0x5AA6A80", Offset = "0x5AA5A80", VA = "0x5AA6A80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003EA4")]
		[Address(RVA = "0x5AA6A90", Offset = "0x5AA5A90", VA = "0x5AA6A90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AEE")]
	public bool Running
	{
		[Token(Token = "0x6003EA5")]
		[Address(RVA = "0x5AA6AA0", Offset = "0x5AA5AA0", VA = "0x5AA6AA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003EA6")]
		[Address(RVA = "0x5AA6AB0", Offset = "0x5AA5AB0", VA = "0x5AA6AB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AEF")]
	public bool WantsRecall
	{
		[Token(Token = "0x6003EA7")]
		[Address(RVA = "0x5AA6AC0", Offset = "0x5AA5AC0", VA = "0x5AA6AC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003EA8")]
		[Address(RVA = "0x5AA6AD0", Offset = "0x5AA5AD0", VA = "0x5AA6AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AF0")]
	public int Revision
	{
		[Token(Token = "0x6003EA9")]
		[Address(RVA = "0x5AA6AE0", Offset = "0x5AA5AE0", VA = "0x5AA6AE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003EAA")]
		[Address(RVA = "0x5AA6AF0", Offset = "0x5AA5AF0", VA = "0x5AA6AF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003EAB")]
	[Address(RVA = "0x5AA6B00", Offset = "0x5AA5B00", VA = "0x5AA6B00")]
	public bool TrySetOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance, bool hasAuthority, bool alive, bool mounted)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EAC")]
	[Address(RVA = "0x5AA6C50", Offset = "0x5AA5C50", VA = "0x5AA6C50")]
	public void ApplyOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance)
	{
	}

	[Token(Token = "0x6003EAD")]
	[Address(RVA = "0x5AA6CD0", Offset = "0x5AA5CD0", VA = "0x5AA6CD0")]
	public void Tick(Vector3 position, Vector3 velocity, bool grounded, bool mounted, Vector3? targetPosition, bool recallEnabled, float deltaTime)
	{
	}

	[Token(Token = "0x6003EAE")]
	[Address(RVA = "0x5AA6C10", Offset = "0x5AA5C10", VA = "0x5AA6C10")]
	public static bool IsFinite(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EAF")]
	[Address(RVA = "0x5AA6C20", Offset = "0x5AA5C20", VA = "0x5AA6C20")]
	public static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EB0")]
	[Address(RVA = "0x5AA72C0", Offset = "0x5AA62C0", VA = "0x5AA72C0")]
	public HorseController()
	{
	}
}
