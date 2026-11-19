// ==================== AoTTG2 cross-reference ====================
// Type: PrintCenterPivot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PrintCenterPivot.c
// Prior real C# source (older reference): Assets/Scripts/Utility/PrintCenterPivot.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000029")]
internal class PrintCenterPivot : MonoBehaviour
{
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x57520C0", Offset = "0x57510C0", VA = "0x57520C0")]
	private void Awake()
	{
		// Lifted from source/cpp/PrintCenterPivot.c (PrintCenterPivot$$Awake): clean
		MeshRenderer __this_00;
		String[] values;
		String pSVar1;
		Bounds local_30;

		__this_00 = this.GetComponentInChildren<MeshRenderer>();
		if (__this_00 != null) {
			local_30 = __this_00.bounds;
			values = (String[])new string[5];
			pSVar1 = local_30.ToString();
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = pSVar1;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = ",";
						pSVar1 = local_30.m_Center.y.ToString();
						if (2 < (uint)values.Length) {
							values[2] = pSVar1;
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = ",";
								pSVar1 = local_30.m_Center.z.ToString();
								if (4 < (uint)values.Length) {
									values[4] = pSVar1;
									pSVar1 = String.Concat(values);
									Debug.Log((object)pSVar1);
									return;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x5752270", Offset = "0x5751270", VA = "0x5752270")]
	public PrintCenterPivot()
	{
		// Lifted from source/cpp/PrintCenterPivot.c (PrintCenterPivot$$.ctor): clean
		base();
		return;
	}
}
