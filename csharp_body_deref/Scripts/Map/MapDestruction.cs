// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestruction
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapDestruction.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000395")]
internal static class MapDestruction
{
	[Token(Token = "0x2000396")]
	[CompilerGenerated]
	private sealed class _003CSweepHitbox_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40012A2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40012A3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40012A4")]
		[FieldOffset(Offset = "0x20")]
		public BaseHitbox hitbox;

		[Token(Token = "0x40012A5")]
		[FieldOffset(Offset = "0x28")]
		private HashSet<int> _003Chit_003E5__2;

		[Token(Token = "0x40012A6")]
		[FieldOffset(Offset = "0x30")]
		private Collider _003Ccollider_003E5__3;

		[Token(Token = "0x40012A7")]
		[FieldOffset(Offset = "0x38")]
		private Vector3 _003Cprevious_003E5__4;

		[Token(Token = "0x1700026B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016CB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700026C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016CD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSweepHitbox_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x1EB9770", Offset = "0x1EB7D70", VA = "0x181EB9770", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016CC")]
		[Address(RVA = "0x1EB9CF0", Offset = "0x1EB82F0", VA = "0x181EB9CF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400128D")]
	private const float MaxObjectToHitboxSize = 23f;

	[Token(Token = "0x400128E")]
	private const float MaxObjectToExplosionSize = 11f;

	[Token(Token = "0x400128F")]
	private const float MaxObjectSize = 1000f;

	[Token(Token = "0x4001290")]
	private const float MaxHitToHandSize = 4f;

	[Token(Token = "0x4001291")]
	private const float MaxExplosionSize = 150f;

	[Token(Token = "0x4001292")]
	private const float ExplosionReachToRadius = 0.5f;

	[Token(Token = "0x4001293")]
	private const float MaxAttackerDistance = 1000f;

	[Token(Token = "0x4001294")]
	private const int StateChunkSize = 256;

	[Token(Token = "0x4001295")]
	private const int MaxEffectsPerEvent = 4;

	[Token(Token = "0x4001296")]
	private const float AttachedSizeRatio = 0.5f;

	[Token(Token = "0x4001297")]
	private const float AttachedContainment = 0.6f;

	[Token(Token = "0x4001298")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int MapMask;

	[Token(Token = "0x4001299")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, DestructibleMapObject> Objects;

	[Token(Token = "0x400129A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Renderer, BatchSlice> BatchSlices;

	[Token(Token = "0x400129B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HashSet<int> Destroyed;

	[Token(Token = "0x400129C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Collider[] Overlaps;

	[Token(Token = "0x400129D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly List<int> Targets;

	[Token(Token = "0x400129E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly List<DestructibleMapObject> Applied;

	[Token(Token = "0x400129F")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Queue<int> Pending;

	[Token(Token = "0x40012A0")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Component> NavMeshRemovals;

	[Token(Token = "0x40012A1")]
	[FieldOffset(Offset = "0x48")]
	private static readonly WaitForFixedUpdate FixedStep;

	[Token(Token = "0x17000269")]
	public static bool IsActive
	{
		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x1E931A0", Offset = "0x1E917A0", VA = "0x181E931A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026A")]
	private static bool Enabled
	{
		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x1E93120", Offset = "0x1E91720", VA = "0x181E93120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x1E92A20", Offset = "0x1E91020", VA = "0x181E92A20")]
	public static void Reset()
	{
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x1E91760", Offset = "0x1E8FD60", VA = "0x181E91760")]
	public static void RegisterBatchSlice(Renderer original, Mesh combined, int start, int count)
	{
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x1E8F3E0", Offset = "0x1E8D9E0", VA = "0x181E8F3E0")]
	public static void Build()
	{
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x1E91BD0", Offset = "0x1E901D0", VA = "0x181E91BD0")]
	private static void RemoveParentsOfIndestructible()
	{
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x1E92100", Offset = "0x1E90700", VA = "0x181E92100")]
	public static void Remove(int id)
	{
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x1E8F7B0", Offset = "0x1E8DDB0", VA = "0x181E8F7B0")]
	public static bool CanDestroyWith(BaseCharacter attacker)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x1E92C00", Offset = "0x1E91200", VA = "0x181E92C00")]
	[IteratorStateMachine(typeof(_003CSweepHitbox_003Ed__31))]
	public static IEnumerator SweepHitbox(BaseHitbox hitbox)
	{
		return null;
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x1E8FF30", Offset = "0x1E8E530", VA = "0x181E8FF30")]
	public static void Explode(BaseCharacter attacker, Vector3 center, float radius)
	{
	}

	[Token(Token = "0x60016B5")]
	[Address(RVA = "0x1E92300", Offset = "0x1E90900", VA = "0x181E92300")]
	private static void Request(BaseCharacter attacker, int count, Vector3 center, Vector3 direction, float hitSize, HashSet<int> hit)
	{
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x1E90810", Offset = "0x1E8EE10", VA = "0x181E90810")]
	public static void OnRequest(int attackerId, int[] ids, Vector3 center, Vector3 direction, float hitSize, Player sender)
	{
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x1E90750", Offset = "0x1E8ED50", VA = "0x181E90750")]
	public static void OnDestroyed(int[] ids, Vector3 center, float hitSize, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x1E921B0", Offset = "0x1E907B0", VA = "0x181E921B0")]
	public static void RequestState()
	{
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x1E91210", Offset = "0x1E8F810", VA = "0x181E91210")]
	public static void OnStateRequest(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x1E91690", Offset = "0x1E8FC90", VA = "0x181E91690")]
	public static void OnState(int[] ids, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x1E8EE40", Offset = "0x1E8D440", VA = "0x181E8EE40")]
	private static void Apply(int[] ids, Vector3 center, float hitSize, bool effects)
	{
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x1E8FA80", Offset = "0x1E8E080", VA = "0x181E8FA80")]
	private static void EnqueueAttached(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x1E8F8B0", Offset = "0x1E8DEB0", VA = "0x181E8F8B0")]
	private static float ContainedFraction(Bounds inner, Bounds outer)
	{
		return default(float);
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x1E8F6A0", Offset = "0x1E8DCA0", VA = "0x181E8F6A0")]
	private static bool CanBreak(int id, float maxObjectSize)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x1E90690", Offset = "0x1E8EC90", VA = "0x181E90690")]
	private static float GetMaxObjectSize(BaseCharacter attacker, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x1E904F0", Offset = "0x1E8EAF0", VA = "0x181E904F0")]
	private static float GetMaxHitSize(BaseCharacter attacker, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x1E901B0", Offset = "0x1E8E7B0", VA = "0x181E901B0")]
	private static float GetHandSize(BaseTitan titan, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x60016C2")]
	[Address(RVA = "0x1E902C0", Offset = "0x1E8E8C0", VA = "0x181E902C0")]
	private static float GetHitSize(Collider collider)
	{
		return default(float);
	}

	[Token(Token = "0x60016C3")]
	[Address(RVA = "0x1E92AF0", Offset = "0x1E910F0", VA = "0x181E92AF0")]
	private static void SpawnEffects(DestructibleMapObject target, Vector3 center, float hitSize)
	{
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x1E91830", Offset = "0x1E8FE30", VA = "0x181E91830")]
	private static void ReleaseHooks(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x1E91A40", Offset = "0x1E90040", VA = "0x181E91A40")]
	private static void ReleaseHooks(HookUseable useable, DestructibleMapObject target)
	{
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x1E90720", Offset = "0x1E8ED20", VA = "0x181E90720")]
	private static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}
}
