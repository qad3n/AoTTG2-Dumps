// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.CityCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/CityCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/CityCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x200023D")]
internal class CityCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x200023E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C4A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C4B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C4C")]
		[FieldOffset(Offset = "0x20")]
		public CityCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000C4D")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000C4E")]
		[FieldOffset(Offset = "0x30")]
		private char[] _003CrandomIndices_003E5__2;

		[Token(Token = "0x4000C4F")]
		[FieldOffset(Offset = "0x38")]
		private string[] _003ChouseUrls_003E5__3;

		[Token(Token = "0x4000C50")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CmiscUrls_003E5__4;

		[Token(Token = "0x4000C51")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x4000C52")]
		[FieldOffset(Offset = "0x50")]
		private List<GameObject>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x170001AD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000DFA")]
			[Address(RVA = "0x4475B00", Offset = "0x4475B00", VA = "0x4475B00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001AE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000DFC")]
			[Address(RVA = "0x4475B50", Offset = "0x4475B50", VA = "0x4475B50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x4474390", Offset = "0x4474390", VA = "0x4474390")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DF5")]
		[Address(RVA = "0x4474C90", Offset = "0x4474C90", VA = "0x4474C90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DF6")]
		[Address(RVA = "0x4474D40", Offset = "0x4474D40", VA = "0x4474D40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x4475A40", Offset = "0x4475A40", VA = "0x4475A40")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x4475A80", Offset = "0x4475A80", VA = "0x4475A80")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x4475AC0", Offset = "0x4475AC0", VA = "0x4475AC0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x4475B10", Offset = "0x4475B10", VA = "0x4475B10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _houseObjects;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0x38")]
	private List<GameObject> _wallObjects;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x40")]
	private List<GameObject> _gateObjects;

	[Token(Token = "0x170001AC")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000DEF")]
		[Address(RVA = "0x44742E0", Offset = "0x44742E0", VA = "0x44742E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4474310", Offset = "0x4474310", VA = "0x4474310", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__6))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x44743B0", Offset = "0x44743B0", VA = "0x44743B0")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4474560", Offset = "0x4474560", VA = "0x4474560", Slot = "8")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4474B90", Offset = "0x4474B90", VA = "0x4474B90")]
	public CityCustomSkinLoader()
	{
	}
}
