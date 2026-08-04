// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.DebugAttackKeyframes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/DebugAttackKeyframes.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x20004C1")]
internal class DebugAttackKeyframes : MonoBehaviour
{
	[Token(Token = "0x20004C2")]
	[CompilerGenerated]
	private sealed class _003CGenerateAttackFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014BD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014BE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014BF")]
		[FieldOffset(Offset = "0x20")]
		public DebugAttackKeyframes _003C_003E4__this;

		[Token(Token = "0x40014C0")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode _003Cdata_003E5__2;

		[Token(Token = "0x40014C1")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode _003CnewData_003E5__3;

		[Token(Token = "0x40014C2")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ctotal_003E5__4;

		[Token(Token = "0x40014C3")]
		[FieldOffset(Offset = "0x40")]
		private JSONNode.KeyEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x40014C4")]
		[FieldOffset(Offset = "0x88")]
		private string _003CattackName_003E5__6;

		[Token(Token = "0x40014C5")]
		[FieldOffset(Offset = "0x90")]
		private JSONObject _003CnewInfo_003E5__7;

		[Token(Token = "0x40014C6")]
		[FieldOffset(Offset = "0x98")]
		private JSONArray _003Cframes_003E5__8;

		[Token(Token = "0x40014C7")]
		[FieldOffset(Offset = "0xA0")]
		private float _003CstartTime_003E5__9;

		[Token(Token = "0x40014C8")]
		[FieldOffset(Offset = "0xA4")]
		private Vector3 _003CstartPosition_003E5__10;

		[Token(Token = "0x40014C9")]
		[FieldOffset(Offset = "0xB0")]
		private float[] _003Cmins_003E5__11;

		[Token(Token = "0x40014CA")]
		[FieldOffset(Offset = "0xB8")]
		private float[] _003Cmaxes_003E5__12;

		[Token(Token = "0x40014CB")]
		[FieldOffset(Offset = "0xC0")]
		private int _003CcurrFrame_003E5__13;

		[Token(Token = "0x170009A1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003219")]
			[Address(RVA = "0x4189030", Offset = "0x4189030", VA = "0x4189030", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009A2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600321B")]
			[Address(RVA = "0x4189080", Offset = "0x4189080", VA = "0x4189080", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003216")]
		[Address(RVA = "0x4187B80", Offset = "0x4187B80", VA = "0x4187B80")]
		[DebuggerHidden]
		public _003CGenerateAttackFrames_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003217")]
		[Address(RVA = "0x4187EF0", Offset = "0x4187EF0", VA = "0x4187EF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003218")]
		[Address(RVA = "0x4187F00", Offset = "0x4187F00", VA = "0x4187F00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600321A")]
		[Address(RVA = "0x4189040", Offset = "0x4189040", VA = "0x4189040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40014BB")]
	[FieldOffset(Offset = "0x20")]
	protected BaseTitan _titan;

	[Token(Token = "0x40014BC")]
	[FieldOffset(Offset = "0x28")]
	protected string _name;

	[Token(Token = "0x6003212")]
	[Address(RVA = "0x41878B0", Offset = "0x41878B0", VA = "0x41878B0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003213")]
	[Address(RVA = "0x4187B10", Offset = "0x4187B10", VA = "0x4187B10")]
	[IteratorStateMachine(typeof(_003CGenerateAttackFrames_003Ed__3))]
	public IEnumerator GenerateAttackFrames()
	{
		return null;
	}

	[Token(Token = "0x6003214")]
	[Address(RVA = "0x4187BA0", Offset = "0x4187BA0", VA = "0x4187BA0")]
	private JSONObject DebugCreateFrameJSON(int frame, BaseHitbox hitbox, float[] mins, float[] maxes, Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003215")]
	[Address(RVA = "0x4187EE0", Offset = "0x4187EE0", VA = "0x4187EE0")]
	public DebugAttackKeyframes()
	{
	}
}
