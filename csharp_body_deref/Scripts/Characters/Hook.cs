using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004AD")]
internal class Hook : MonoBehaviour
{
	[Token(Token = "0x40014DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public HookState State;

	[Token(Token = "0x40014DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Transform Anchor;

	[Token(Token = "0x40014DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public BaseCharacter HookCharacter;

	[Token(Token = "0x40014DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Transform HookParent;

	[Token(Token = "0x40014DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected bool _hasHookParent;

	[Token(Token = "0x40014DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public LineRenderer _renderer;

	[Token(Token = "0x40014E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool HasOffset;

	[Token(Token = "0x40014E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	protected bool _left;

	[Token(Token = "0x40014E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Human _owner;

	[Token(Token = "0x40014E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected int _id;

	[Token(Token = "0x40014E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<Vector3> _nodes;

	[Token(Token = "0x40014E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Vector3 _baseVelocity;

	[Token(Token = "0x40014E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	protected Vector3 _relativeVelocity;

	[Token(Token = "0x40014E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected Vector3 _hookPosition;

	[Token(Token = "0x40014E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	protected Vector3 _lastWorldHookPosition;

	[Token(Token = "0x40014E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected float _currentLiveTime;

	[Token(Token = "0x40014EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ParticleSystem _particles;

	[Token(Token = "0x40014EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected GameObject _endSprite;

	[Token(Token = "0x40014EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static LayerMask HookMask;

	[Token(Token = "0x40014ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected float _tiling;

	[Token(Token = "0x40014EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	protected float _lastLength;

	[Token(Token = "0x40014EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected float _maxLiveTime;

	[Token(Token = "0x40014F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private bool _usingDeathTimer;

	[Token(Token = "0x40014F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Vector3 _lastGoodHookPoint;

	[Token(Token = "0x40014F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	private bool _firstDeathFrame;

	[Token(Token = "0x40014F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private float _deathTimerOffset;

	[Token(Token = "0x60031F4")]
	[Address(RVA = "0x3EA4290", Offset = "0x3EA4290", VA = "0x3EA4290")]
	private void ResetState()
	{
	}

	[Token(Token = "0x60031F5")]
	[Address(RVA = "0x3EA42F0", Offset = "0x3EA42F0", VA = "0x3EA42F0")]
	public static Hook CreateHook(Human owner, bool left, int id, float maxLiveTime, bool gun = false)
	{
		return null;
	}

	[Token(Token = "0x60031F6")]
	[Address(RVA = "0x3EA4440", Offset = "0x3EA4440", VA = "0x3EA4440")]
	protected void Awake()
	{
	}

	[Token(Token = "0x60031F7")]
	[Address(RVA = "0x3EA4650", Offset = "0x3EA4650", VA = "0x3EA4650")]
	public void SetSkin(float tiling)
	{
	}

	[Token(Token = "0x60031F8")]
	[Address(RVA = "0x3EA4660", Offset = "0x3EA4660", VA = "0x3EA4660")]
	private void UpdateSkin()
	{
	}

	[Token(Token = "0x60031F9")]
	[Address(RVA = "0x3EA48A0", Offset = "0x3EA48A0", VA = "0x3EA48A0")]
	public void OnSetHookState(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60031FA")]
	[Address(RVA = "0x3EA4AA0", Offset = "0x3EA4AA0", VA = "0x3EA4AA0")]
	public void SetHookStateLocal(int state)
	{
	}

	[Token(Token = "0x60031FB")]
	[Address(RVA = "0x3EA4AE0", Offset = "0x3EA4AE0", VA = "0x3EA4AE0")]
	public void OnSetHooking(Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60031FC")]
	[Address(RVA = "0x3EA4FE0", Offset = "0x3EA4FE0", VA = "0x3EA4FE0")]
	public void OnSetHooked(Vector3 position, int photonViewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60031FD")]
	[Address(RVA = "0x3EA51E0", Offset = "0x3EA51E0", VA = "0x3EA51E0")]
	private void OnSetHooked(Vector3 position, Transform transform)
	{
	}

	[Token(Token = "0x60031FE")]
	[Address(RVA = "0x3EA5850", Offset = "0x3EA5850", VA = "0x3EA5850")]
	public void SetHookState(HookState state)
	{
	}

	[Token(Token = "0x60031FF")]
	[Address(RVA = "0x3EA5A10", Offset = "0x3EA5A10", VA = "0x3EA5A10")]
	public void SetHooking(Vector3 baseVelocity, Vector3 relativeVelocity)
	{
	}

	[Token(Token = "0x6003200")]
	[Address(RVA = "0x3EA5C60", Offset = "0x3EA5C60", VA = "0x3EA5C60")]
	public void SetHooked(Vector3 position, [Optional] Transform t, int viewId = -1, int objectId = -1)
	{
	}

	[Token(Token = "0x6003201")]
	[Address(RVA = "0x3EA6000", Offset = "0x3EA6000", VA = "0x3EA6000")]
	protected void FinishDisable()
	{
	}

	[Token(Token = "0x6003202")]
	[Address(RVA = "0x3EA6040", Offset = "0x3EA6040", VA = "0x3EA6040")]
	protected void UpdateHooking()
	{
	}

	[Token(Token = "0x6003203")]
	[Address(RVA = "0x3EA6200", Offset = "0x3EA6200", VA = "0x3EA6200")]
	protected void UpdateHooked()
	{
	}

	[Token(Token = "0x6003204")]
	[Address(RVA = "0x3EA6CD0", Offset = "0x3EA6CD0", VA = "0x3EA6CD0")]
	protected void UpdateDisablingHooking()
	{
	}

	[Token(Token = "0x6003205")]
	[Address(RVA = "0x3EA7010", Offset = "0x3EA7010", VA = "0x3EA7010")]
	protected void UpdateDisablingHooked()
	{
	}

	[Token(Token = "0x6003206")]
	[Address(RVA = "0x3EA7150", Offset = "0x3EA7150", VA = "0x3EA7150")]
	protected void FixedUpdateHooking()
	{
	}

	[Token(Token = "0x6003207")]
	[Address(RVA = "0x3EA8140", Offset = "0x3EA8140", VA = "0x3EA8140")]
	protected void FixedUpdateHooked()
	{
	}

	[Token(Token = "0x6003208")]
	[Address(RVA = "0x3EA83A0", Offset = "0x3EA83A0", VA = "0x3EA83A0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003209")]
	[Address(RVA = "0x3EA8400", Offset = "0x3EA8400", VA = "0x3EA8400")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x600320A")]
	[Address(RVA = "0x3EA47C0", Offset = "0x3EA47C0", VA = "0x3EA47C0")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600320B")]
	[Address(RVA = "0x3EA8480", Offset = "0x3EA8480", VA = "0x3EA8480")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x600320C")]
	[Address(RVA = "0x3EA8550", Offset = "0x3EA8550", VA = "0x3EA8550")]
	public Hook()
	{
	}
}
