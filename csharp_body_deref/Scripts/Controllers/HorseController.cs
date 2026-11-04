// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HorseController
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/HorseController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000620")]
internal class HorseController
{
	[Token(Token = "0x4001B74")]
	[FieldOffset(Offset = "0x3C")]
	private float _recallTime;

	[Token(Token = "0x17000AA0")]
	public HorseOrder Order
	{
		[Token(Token = "0x6003C0A")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(HorseOrder);
		}
		[Token(Token = "0x6003C0B")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA1")]
	public int TargetViewId
	{
		[Token(Token = "0x6003C0C")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003C0D")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA2")]
	public Vector3 Destination
	{
		[Token(Token = "0x6003C0E")]
		[Address(RVA = "0x111AD10", Offset = "0x1119310", VA = "0x18111AD10")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003C0F")]
		[Address(RVA = "0x111C9D0", Offset = "0x111AFD0", VA = "0x18111C9D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA3")]
	public float StoppingDistance
	{
		[Token(Token = "0x6003C10")]
		[Address(RVA = "0x18A4260", Offset = "0x18A2860", VA = "0x1818A4260")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003C11")]
		[Address(RVA = "0x18A4270", Offset = "0x18A2870", VA = "0x1818A4270")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA4")]
	public Vector3 Direction
	{
		[Token(Token = "0x6003C12")]
		[Address(RVA = "0x20FE3B0", Offset = "0x20FC9B0", VA = "0x1820FE3B0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003C13")]
		[Address(RVA = "0x20FE3D0", Offset = "0x20FC9D0", VA = "0x1820FE3D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA5")]
	public bool Moving
	{
		[Token(Token = "0x6003C14")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003C15")]
		[Address(RVA = "0xAB9F80", Offset = "0xAB8580", VA = "0x180AB9F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA6")]
	public bool Running
	{
		[Token(Token = "0x6003C16")]
		[Address(RVA = "0x1D9BAE0", Offset = "0x1D9A0E0", VA = "0x181D9BAE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003C17")]
		[Address(RVA = "0x20FE3E0", Offset = "0x20FC9E0", VA = "0x1820FE3E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA7")]
	public bool WantsRecall
	{
		[Token(Token = "0x6003C18")]
		[Address(RVA = "0x1D9BAD0", Offset = "0x1D9A0D0", VA = "0x181D9BAD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003C19")]
		[Address(RVA = "0x20FE3F0", Offset = "0x20FC9F0", VA = "0x1820FE3F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AA8")]
	public int Revision
	{
		[Token(Token = "0x6003C1A")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003C1B")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003C1C")]
	[Address(RVA = "0x20FE1E0", Offset = "0x20FC7E0", VA = "0x1820FE1E0")]
	public bool TrySetOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance, bool hasAuthority, bool alive, bool mounted)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C1D")]
	[Address(RVA = "0x20FDC50", Offset = "0x20FC250", VA = "0x1820FDC50")]
	public void ApplyOrder(HorseOrder order, int targetViewId, Vector3 destination, float stoppingDistance)
	{
	}

	[Token(Token = "0x6003C1E")]
	[Address(RVA = "0x20FDD50", Offset = "0x20FC350", VA = "0x1820FDD50")]
	public void Tick(Vector3 position, Vector3 velocity, bool grounded, bool mounted, Vector3? targetPosition, bool recallEnabled, float deltaTime)
	{
	}

	[Token(Token = "0x6003C1F")]
	[Address(RVA = "0x1EAC170", Offset = "0x1EAA770", VA = "0x181EAC170")]
	public static bool IsFinite(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C20")]
	[Address(RVA = "0x20FDCE0", Offset = "0x20FC2E0", VA = "0x1820FDCE0")]
	public static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C21")]
	[Address(RVA = "0x20FE3A0", Offset = "0x20FC9A0", VA = "0x1820FE3A0")]
	public HorseController()
	{
	}
}
