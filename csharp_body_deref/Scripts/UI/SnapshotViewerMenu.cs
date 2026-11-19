// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotViewerMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SnapshotViewerMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008E4")]
internal class SnapshotViewerMenu : ViewerMenu
{
	[Token(Token = "0x20008E5")]
	[CompilerGenerated]
	private sealed class _003CSaveCoroutine_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002CEC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002CED")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002CEE")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotViewerMenu _003C_003E4__this;

		[Token(Token = "0x17000ECD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60054AC")]
			[Address(RVA = "0x5CACD40", Offset = "0x5CABD40", VA = "0x5CACD40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ECE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60054AE")]
			[Address(RVA = "0x5CACD90", Offset = "0x5CABD90", VA = "0x5CACD90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60054A9")]
		[Address(RVA = "0x5CAC280", Offset = "0x5CAB280", VA = "0x5CAC280")]
		[DebuggerHidden]
		public _003CSaveCoroutine_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60054AA")]
		[Address(RVA = "0x5CAC6E0", Offset = "0x5CAB6E0", VA = "0x5CAC6E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60054AB")]
		[Address(RVA = "0x5CAC6F0", Offset = "0x5CAB6F0", VA = "0x5CAC6F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60054AD")]
		[Address(RVA = "0x5CACD50", Offset = "0x5CABD50", VA = "0x5CACD50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002CE4")]
	private const float SnapshotScale = 1.5f;

	[Token(Token = "0x4002CE5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector2 KillScoreOffset;

	[Token(Token = "0x4002CE6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2 NameOffset;

	[Token(Token = "0x4002CE7")]
	[FieldOffset(Offset = "0xA0")]
	private readonly Vector3[] _captureCorners;

	[Token(Token = "0x4002CE8")]
	[FieldOffset(Offset = "0xA8")]
	private SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002CE9")]
	[FieldOffset(Offset = "0xB0")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4002CEA")]
	[FieldOffset(Offset = "0xB8")]
	private Text _nameLabel;

	[Token(Token = "0x4002CEB")]
	[FieldOffset(Offset = "0xC0")]
	private Texture2D _currentSnapshot;

	[Token(Token = "0x17000ECC")]
	protected override int Count
	{
		[Token(Token = "0x60054A1")]
		[Address(RVA = "0x5CABD40", Offset = "0x5CAAD40", VA = "0x5CABD40", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60054A2")]
	[Address(RVA = "0x5CABDF0", Offset = "0x5CAADF0", VA = "0x5CABDF0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60054A3")]
	[Address(RVA = "0x5CAC180", Offset = "0x5CAB180", VA = "0x5CAC180")]
	public void Save()
	{
	}

	[Token(Token = "0x60054A4")]
	[Address(RVA = "0x5CAC210", Offset = "0x5CAB210", VA = "0x5CAC210")]
	[IteratorStateMachine(typeof(_003CSaveCoroutine_003Ed__12))]
	private IEnumerator SaveCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60054A5")]
	[Address(RVA = "0x5CAC2A0", Offset = "0x5CAB2A0", VA = "0x5CAC2A0", Slot = "9")]
	protected override void Load(int index)
	{
	}

	[Token(Token = "0x60054A6")]
	[Address(RVA = "0x5CAC570", Offset = "0x5CAB570", VA = "0x5CAC570")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60054A7")]
	[Address(RVA = "0x5CAC5F0", Offset = "0x5CAB5F0", VA = "0x5CAC5F0")]
	public SnapshotViewerMenu()
	{
	}
}
