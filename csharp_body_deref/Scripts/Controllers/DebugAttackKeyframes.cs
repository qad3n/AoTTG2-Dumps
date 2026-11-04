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

[Token(Token = "0x2000616")]
internal class DebugAttackKeyframes : MonoBehaviour
{
	[Token(Token = "0x2000617")]
	[CompilerGenerated]
	private sealed class _003CGenerateAttackFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AFA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AFB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AFC")]
		[FieldOffset(Offset = "0x20")]
		public DebugAttackKeyframes _003C_003E4__this;

		[Token(Token = "0x4001AFD")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode _003Cdata_003E5__2;

		[Token(Token = "0x4001AFE")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode _003CnewData_003E5__3;

		[Token(Token = "0x4001AFF")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ctotal_003E5__4;

		[Token(Token = "0x4001B00")]
		[FieldOffset(Offset = "0x40")]
		private JSONNode.KeyEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x4001B01")]
		[FieldOffset(Offset = "0x88")]
		private string _003CattackName_003E5__6;

		[Token(Token = "0x4001B02")]
		[FieldOffset(Offset = "0x90")]
		private JSONObject _003CnewInfo_003E5__7;

		[Token(Token = "0x4001B03")]
		[FieldOffset(Offset = "0x98")]
		private JSONArray _003Cframes_003E5__8;

		[Token(Token = "0x4001B04")]
		[FieldOffset(Offset = "0xA0")]
		private float _003CstartTime_003E5__9;

		[Token(Token = "0x4001B05")]
		[FieldOffset(Offset = "0xA4")]
		private Vector3 _003CstartPosition_003E5__10;

		[Token(Token = "0x4001B06")]
		[FieldOffset(Offset = "0xB0")]
		private float[] _003Cmins_003E5__11;

		[Token(Token = "0x4001B07")]
		[FieldOffset(Offset = "0xB8")]
		private float[] _003Cmaxes_003E5__12;

		[Token(Token = "0x4001B08")]
		[FieldOffset(Offset = "0xC0")]
		private int _003CcurrFrame_003E5__13;

		[Token(Token = "0x17000A99")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B8E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A9A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B90")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003B8B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGenerateAttackFrames_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003B8C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003B8D")]
		[Address(RVA = "0x2101BF0", Offset = "0x21001F0", VA = "0x182101BF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003B8F")]
		[Address(RVA = "0x2102DB0", Offset = "0x21013B0", VA = "0x182102DB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AF8")]
	[FieldOffset(Offset = "0x20")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001AF9")]
	[FieldOffset(Offset = "0x28")]
	protected string _name;

	[Token(Token = "0x6003B87")]
	[Address(RVA = "0x20FD060", Offset = "0x20FB660", VA = "0x1820FD060")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003B88")]
	[Address(RVA = "0x20FD600", Offset = "0x20FBC00", VA = "0x1820FD600")]
	[IteratorStateMachine(typeof(_003CGenerateAttackFrames_003Ed__3))]
	public IEnumerator GenerateAttackFrames()
	{
		return null;
	}

	[Token(Token = "0x6003B89")]
	[Address(RVA = "0x20FD2D0", Offset = "0x20FB8D0", VA = "0x1820FD2D0")]
	private JSONObject DebugCreateFrameJSON(int frame, BaseHitbox hitbox, float[] mins, float[] maxes, Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003B8A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugAttackKeyframes()
	{
	}
}
