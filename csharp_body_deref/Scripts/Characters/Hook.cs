// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Hook
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Hook.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Hook.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004F2")]
internal class Hook : MonoBehaviour
{
	[Token(Token = "0x40015EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public HookState State;

	[Token(Token = "0x40015EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Transform Anchor;

	[Token(Token = "0x40015ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public BaseCharacter HookCharacter;

	[Token(Token = "0x40015EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Transform HookParent;

	[Token(Token = "0x40015EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected bool _hasHookParent;

	[Token(Token = "0x40015F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public LineRenderer _renderer;

	[Token(Token = "0x40015F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool HasOffset;

	[Token(Token = "0x40015F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	protected bool _left;

	[Token(Token = "0x40015F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Human _owner;

	[Token(Token = "0x40015F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected int _id;

	[Token(Token = "0x40015F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<Vector3> _nodes;

	[Token(Token = "0x40015F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Vector3 _baseVelocity;

	[Token(Token = "0x40015F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	protected Vector3 _relativeVelocity;

	[Token(Token = "0x40015F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected Vector3 _hookPosition;

	[Token(Token = "0x40015F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	protected Vector3 _lastWorldHookPosition;

	[Token(Token = "0x40015FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected float _currentLiveTime;

	[Token(Token = "0x40015FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ParticleSystem _particles;

	[Token(Token = "0x40015FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected GameObject _endSprite;

	[Token(Token = "0x40015FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static LayerMask HookMask;

	[Token(Token = "0x40015FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected float _tiling;

	[Token(Token = "0x40015FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	protected float _lastLength;

	[Token(Token = "0x4001600")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected float _maxLiveTime;

	[Token(Token = "0x4001601")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private bool _usingDeathTimer;

	[Token(Token = "0x4001602")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Vector3 _lastGoodHookPoint;

	[Token(Token = "0x4001603")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	private bool _firstDeathFrame;

	[Token(Token = "0x4001604")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private float _deathTimerOffset;

	[Token(Token = "0x6003402")]
	[Address(RVA = "0x41B0B30", Offset = "0x41B0B30", VA = "0x41B0B30")]
	private void ResetState()
	{
	}

	[Token(Token = "0x6003403")]
	[Address(RVA = "0x41B0B90", Offset = "0x41B0B90", VA = "0x41B0B90")]
	public static Hook CreateHook(Human owner, bool left, int id, float maxLiveTime, bool gun = false)
	{
		return null;
	}

	[Token(Token = "0x6003404")]
	[Address(RVA = "0x41B0CE0", Offset = "0x41B0CE0", VA = "0x41B0CE0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003405")]
	[Address(RVA = "0x41B0EF0", Offset = "0x41B0EF0", VA = "0x41B0EF0")]
	public void SetSkin(float tiling)
	{
	}

	[Token(Token = "0x6003406")]
	[Address(RVA = "0x41B0F00", Offset = "0x41B0F00", VA = "0x41B0F00")]
	private void UpdateSkin()
	{
	}

	[Token(Token = "0x6003407")]
	[Address(RVA = "0x41B1140", Offset = "0x41B1140", VA = "0x41B1140")]
	public void OnSetHookState(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003408")]
	[Address(RVA = "0x41B1340", Offset = "0x41B1340", VA = "0x41B1340")]
	public void SetHookStateLocal(int state)
	{
	}

	[Token(Token = "0x6003409")]
	[Address(RVA = "0x41B1380", Offset = "0x41B1380", VA = "0x41B1380")]
	public void OnSetHooking(Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600340A")]
	[Address(RVA = "0x41B1880", Offset = "0x41B1880", VA = "0x41B1880")]
	public void OnSetHooked(Vector3 position, int photonViewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600340B")]
	[Address(RVA = "0x41B1A80", Offset = "0x41B1A80", VA = "0x41B1A80")]
	private void OnSetHooked(Vector3 position, Transform transform)
	{
	}

	[Token(Token = "0x600340C")]
	[Address(RVA = "0x41B20F0", Offset = "0x41B20F0", VA = "0x41B20F0")]
	public void SetHookState(HookState state)
	{
	}

	[Token(Token = "0x600340D")]
	[Address(RVA = "0x41B22B0", Offset = "0x41B22B0", VA = "0x41B22B0")]
	public void SetHooking(Vector3 baseVelocity, Vector3 relativeVelocity)
	{
	}

	[Token(Token = "0x600340E")]
	[Address(RVA = "0x41B2500", Offset = "0x41B2500", VA = "0x41B2500")]
	public void SetHooked(Vector3 position, [Optional] Transform t, int viewId = -1, int objectId = -1)
	{
	}

	[Token(Token = "0x600340F")]
	[Address(RVA = "0x41B28A0", Offset = "0x41B28A0", VA = "0x41B28A0")]
	protected void FinishDisable()
	{
	}

	[Token(Token = "0x6003410")]
	[Address(RVA = "0x41B28E0", Offset = "0x41B28E0", VA = "0x41B28E0")]
	protected void UpdateHooking()
	{
	}

	[Token(Token = "0x6003411")]
	[Address(RVA = "0x41B2AA0", Offset = "0x41B2AA0", VA = "0x41B2AA0")]
	protected void UpdateHooked()
	{
	}

	[Token(Token = "0x6003412")]
	[Address(RVA = "0x41B3570", Offset = "0x41B3570", VA = "0x41B3570")]
	protected void UpdateDisablingHooking()
	{
	}

	[Token(Token = "0x6003413")]
	[Address(RVA = "0x41B38B0", Offset = "0x41B38B0", VA = "0x41B38B0")]
	protected void UpdateDisablingHooked()
	{
	}

	[Token(Token = "0x6003414")]
	[Address(RVA = "0x41B39F0", Offset = "0x41B39F0", VA = "0x41B39F0")]
	protected void FixedUpdateHooking()
	{
	}

	[Token(Token = "0x6003415")]
	[Address(RVA = "0x41B49E0", Offset = "0x41B49E0", VA = "0x41B49E0")]
	protected void FixedUpdateHooked()
	{
	}

	[Token(Token = "0x6003416")]
	[Address(RVA = "0x41B4C40", Offset = "0x41B4C40", VA = "0x41B4C40")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003417")]
	[Address(RVA = "0x41B4CA0", Offset = "0x41B4CA0", VA = "0x41B4CA0")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6003418")]
	[Address(RVA = "0x41B1060", Offset = "0x41B1060", VA = "0x41B1060")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003419")]
	[Address(RVA = "0x41B4D20", Offset = "0x41B4D20", VA = "0x41B4D20")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x600341A")]
	[Address(RVA = "0x41B4DF0", Offset = "0x41B4DF0", VA = "0x41B4DF0")]
	public Hook()
	{
	}
}
