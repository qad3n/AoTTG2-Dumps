// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CustomDebug
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CustomDebug.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000906")]
public class CustomDebug : MonoBehaviour
{
	[Token(Token = "0x2000907")]
	[CompilerGenerated]
	private sealed class _003CDrawLineCoroutine_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DA3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DA4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DA5")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 start;

		[Token(Token = "0x4002DA6")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 end;

		[Token(Token = "0x4002DA7")]
		[FieldOffset(Offset = "0x38")]
		public Color color;

		[Token(Token = "0x4002DA8")]
		[FieldOffset(Offset = "0x48")]
		public float duration;

		[Token(Token = "0x4002DA9")]
		[FieldOffset(Offset = "0x50")]
		private GameObject _003ClineObj_003E5__2;

		[Token(Token = "0x17000EE4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055CE")]
			[Address(RVA = "0x5CDE7C0", Offset = "0x5CDD7C0", VA = "0x5CDE7C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EE5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055D0")]
			[Address(RVA = "0x5CDE810", Offset = "0x5CDD810", VA = "0x5CDE810", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60055CB")]
		[Address(RVA = "0x5CDE4A0", Offset = "0x5CDD4A0", VA = "0x5CDE4A0")]
		[DebuggerHidden]
		public _003CDrawLineCoroutine_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60055CC")]
		[Address(RVA = "0x5CDE560", Offset = "0x5CDD560", VA = "0x5CDE560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60055CD")]
		[Address(RVA = "0x5CDE570", Offset = "0x5CDD570", VA = "0x5CDE570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60055CF")]
		[Address(RVA = "0x5CDE7D0", Offset = "0x5CDD7D0", VA = "0x5CDE7D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000908")]
	[CompilerGenerated]
	private sealed class _003CSpawnPrimitiveCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002DAA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002DAB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002DAC")]
		[FieldOffset(Offset = "0x20")]
		public CustomDebug _003C_003E4__this;

		[Token(Token = "0x4002DAD")]
		[FieldOffset(Offset = "0x28")]
		public PrimitiveType type;

		[Token(Token = "0x4002DAE")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 position;

		[Token(Token = "0x4002DAF")]
		[FieldOffset(Offset = "0x38")]
		public Quaternion Rotation;

		[Token(Token = "0x4002DB0")]
		[FieldOffset(Offset = "0x48")]
		public Vector3 size;

		[Token(Token = "0x4002DB1")]
		[FieldOffset(Offset = "0x54")]
		public Color color;

		[Token(Token = "0x4002DB2")]
		[FieldOffset(Offset = "0x64")]
		public float duration;

		[Token(Token = "0x4002DB3")]
		[FieldOffset(Offset = "0x68")]
		private GameObject _003Cobj_003E5__2;

		[Token(Token = "0x17000EE6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055D4")]
			[Address(RVA = "0x5CDE980", Offset = "0x5CDD980", VA = "0x5CDE980", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EE7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055D6")]
			[Address(RVA = "0x5CDE9D0", Offset = "0x5CDD9D0", VA = "0x5CDE9D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60055D1")]
		[Address(RVA = "0x5CDE4C0", Offset = "0x5CDD4C0", VA = "0x5CDE4C0")]
		[DebuggerHidden]
		public _003CSpawnPrimitiveCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60055D2")]
		[Address(RVA = "0x5CDE820", Offset = "0x5CDD820", VA = "0x5CDE820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60055D3")]
		[Address(RVA = "0x5CDE830", Offset = "0x5CDD830", VA = "0x5CDE830", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60055D5")]
		[Address(RVA = "0x5CDE990", Offset = "0x5CDD990", VA = "0x5CDE990", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002DA1")]
	[FieldOffset(Offset = "0x0")]
	private static CustomDebug _instance;

	[Token(Token = "0x4002DA2")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, GameObject> _debugObjects;

	[Token(Token = "0x60055B7")]
	[Address(RVA = "0x5CDC680", Offset = "0x5CDB680", VA = "0x5CDC680")]
	public static void Init()
	{
	}

	[Token(Token = "0x60055B8")]
	[Address(RVA = "0x5CDC6F0", Offset = "0x5CDB6F0", VA = "0x5CDC6F0")]
	public static void RemoveDebugVisual(string name)
	{
	}

	[Token(Token = "0x60055B9")]
	[Address(RVA = "0x5CDC820", Offset = "0x5CDB820", VA = "0x5CDC820")]
	public static string DrawRay(Vector3 origin, Vector3 direction, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BA")]
	[Address(RVA = "0x5CDCB10", Offset = "0x5CDBB10", VA = "0x5CDCB10")]
	public static string DrawLine(Vector3 start, Vector3 end, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BB")]
	[Address(RVA = "0x5CDCC20", Offset = "0x5CDBC20", VA = "0x5CDCC20")]
	public static string SpawnCube(Vector3 position, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BC")]
	[Address(RVA = "0x5CDCFE0", Offset = "0x5CDBFE0", VA = "0x5CDCFE0")]
	public static string SpawnSphere(Vector3 position, float radius, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BD")]
	[Address(RVA = "0x5CDD120", Offset = "0x5CDC120", VA = "0x5CDD120")]
	public static string SpawnCylinder(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BE")]
	[Address(RVA = "0x5CDD260", Offset = "0x5CDC260", VA = "0x5CDD260")]
	public static string SpawnCapsule(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055BF")]
	[Address(RVA = "0x5CDD3A0", Offset = "0x5CDC3A0", VA = "0x5CDD3A0")]
	public static string SpawnCapsuleCollder(CapsuleCollider capsule, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60055C0")]
	[Address(RVA = "0x5CDD8D0", Offset = "0x5CDC8D0", VA = "0x5CDD8D0")]
	public static void DrawRay(Vector3 origin, Vector3 direction, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C1")]
	[Address(RVA = "0x5CDDB00", Offset = "0x5CDCB00", VA = "0x5CDDB00")]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C2")]
	[Address(RVA = "0x5CDDC50", Offset = "0x5CDCC50", VA = "0x5CDDC50")]
	public static void SpawnCube(Vector3 position, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C3")]
	[Address(RVA = "0x5CDDF30", Offset = "0x5CDCF30", VA = "0x5CDDF30")]
	public static void SpawnSphere(Vector3 position, float radius, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C4")]
	[Address(RVA = "0x5CDE100", Offset = "0x5CDD100", VA = "0x5CDE100")]
	public static void SpawnCylinder(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C5")]
	[Address(RVA = "0x5CDE2D0", Offset = "0x5CDD2D0", VA = "0x5CDE2D0")]
	public static void SpawnCapsule(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60055C6")]
	[Address(RVA = "0x5CDDA40", Offset = "0x5CDCA40", VA = "0x5CDDA40")]
	[IteratorStateMachine(typeof(_003CDrawLineCoroutine_003Ed__17))]
	private IEnumerator DrawLineCoroutine(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60055C7")]
	[Address(RVA = "0x5CDDE40", Offset = "0x5CDCE40", VA = "0x5CDDE40")]
	[IteratorStateMachine(typeof(_003CSpawnPrimitiveCoroutine_003Ed__18))]
	private IEnumerator SpawnPrimitiveCoroutine(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60055C8")]
	[Address(RVA = "0x5CDC930", Offset = "0x5CDB930", VA = "0x5CDC930")]
	private GameObject DrawLineObject(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60055C9")]
	[Address(RVA = "0x5CDCDA0", Offset = "0x5CDBDA0", VA = "0x5CDCDA0")]
	private GameObject SpawnPrimitiveObject(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color)
	{
		return null;
	}

	[Token(Token = "0x60055CA")]
	[Address(RVA = "0x5CDE4E0", Offset = "0x5CDD4E0", VA = "0x5CDE4E0")]
	public CustomDebug()
	{
	}
}
